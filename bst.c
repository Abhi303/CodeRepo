#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Tree {
    struct Tree * left;
    struct Tree * right;
    int data;
};
int findMax(struct Tree *);
struct Tree * insertTree(struct Tree * root, int item) {
    if(root == NULL) {
        struct Tree * nn = (struct Tree *)malloc(sizeof(struct Tree));
        nn -> data = item;
        nn -> left = NULL;
        nn -> right = NULL;
        return nn;
    }
    if(item > root -> data) {
        root -> right = insertTree(root -> right, item);
    }
    else if(item < root -> data) {
        root -> left = insertTree(root -> left, item);
    }
    return root;
}
struct Tree * deleteTree(struct Tree * root, int item) {
    if(root -> data == item) {
        if(root -> left == NULL) return root -> right;
        else if(root -> right == NULL) return root -> left;
        else {
            int x = findMax(root -> left);
            root -> data = x;
            deleteTree(root -> left, root -> data);
            return root;
        }
    }
    if(root -> data < item) root -> right = deleteTree(root -> right, item);
    else if(root ->data > item) root -> left = deleteTree(root -> left, item);
    return root;
}
int findMax(struct Tree * root) {
    while(root -> right)
        root = root -> right;
    return root -> data;
}
void printTree(struct Tree * root) {
    if(root == NULL) return;
    printTree(root -> left);
    printf("%d ",root -> data);
    printTree(root -> right);
}
int checkBST(struct Tree * root, int min, int max) {
    if(root == NULL) return 1;
    if(root -> data <= min || root -> data >= max) return 0;
    int x = checkBST(root -> left, min, root -> data);
    if(x) return checkBST(root -> right, root -> data, max);
    return 0;
}
int main() {
    int n;
    printf("N = ");
    scanf("%d", &n);
    int i;
    struct Tree * root = NULL;
    printf("Enter Numbers:\n");
    for(i = 0;i < n; i++) {
        int x;
        scanf("%d", &x);
        root = insertTree(root, x);
    }
    printTree(root);
    printf("\nEnter Element to Delete:");
    scanf("%d",&n);
    deleteTree(root, n);
    printTree(root);
    printf("\n");
    if(checkBST(root,INT_MIN,INT_MAX)) printf("Valid BST\n");
    else printf("Invalid BST\n");
}
