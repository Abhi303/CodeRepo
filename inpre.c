#include<stdio.h>
#include<stdlib.h>
typedef struct Tree {
    int data;
    struct Tree *left;
    struct Tree *right;
}tree;
int index = 0;
tree *createTree(int val) {
    tree *nn = (tree *)malloc(sizeof(tree));
    nn -> left = NULL;
    nn -> right = NULL;
    nn -> data = val;
    return nn;
}


tree *construct(int *inorder, int *preorder, int low, int high) {
    if(high < low) return NULL;
    int i;
    tree *nn = createTree(preorder[index]);
    for(i = low; i <=high; i++) if(inorder[i] == preorder[index]) break;
    index++;
    nn -> left = construct(inorder, preorder, low, i-1);
    nn -> right = construct(inorder, preorder, i + 1, high);
    return nn;
}

void postorder(tree *t) {
    if(t == NULL) return;
    postorder(t -> left);
    postorder(t -> right);
    printf("%d ",t -> data);
}

int main() {
    int *preorder = (int *)malloc(sizeof(int) * 10);
    int *inorder = (int *)malloc(sizeof(int) * 10);
    int i;
    int x;
    scanf("%d", &x);
    for(i = 0; i < x; i++) scanf("%d", &inorder[i]);
    for(i = 0; i < x; i++) scanf("%d", &preorder[i]);
    tree *t = construct(inorder, preorder, 0, x - 1);
    postorder(t);
    printf("\n");
}
