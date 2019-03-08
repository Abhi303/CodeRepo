#include<stdio.h>
#include<stdlib.h>
int arr[100] = {0};
int lev[100] = {0};

struct node {
    struct node * left;
    struct node * right;
    int data;
};

struct node *newn() { 
    struct node * nn = (struct node *)malloc(sizeof(struct node));
    return nn;
}
struct node * func(struct node *root,int n, int d, int item) {
    if(root == NULL) {
        struct node *nn = newn();
        nn -> data = item;
        nn -> left = nn -> right = NULL;
        if(arr[d] == 0) {
            arr[d] = item;
            lev[d] = n;
        }
        if(lev[d] > n) {
            arr[d] = item;
            lev[d] = n;
         }
        return nn;
    }
    if(item > root -> data) root -> right = func(root -> right, n + 1, d + 1, item);
    else if(item < root -> data) root -> left = func(root -> left, n + 1, d - 1, item);
    return root;
}
int main() {
    int d;
    int a = 1;
    struct node * root = NULL;
    while(1) {
        scanf("%d", &a);
        if(a == -1) break;
        root = func(root, 1, 50, a);
    }
    int i = 0;
    while(arr[i] == 0) i++;
    while(arr[i] != 0) printf("%d ",arr[i++]);
    printf("\n");
}
