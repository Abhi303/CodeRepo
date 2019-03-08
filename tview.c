#include<stdio.h>
#include<stdlib.h>
struct tree {
  struct tree *left;
  struct tree *right;
  int data;
};
void level(struct tree *, int , int *, int);
int height(struct tree *);
struct tree *newn(int n) {
  struct tree *nn = (struct tree*)malloc(sizeof(struct tree));
  nn->data = n;
  nn->left = NULL;
  nn->right = NULL;
  return nn;
}; 

/*void topview(struct tree *root, int arr[]) {
  int n = height(root);
  int i = 1;
  while(i <= n) {
  level(root, i, arr, 10);
  i++;
  }
}

void level(struct tree *root, int n, int arr[], int d) {
  if(n == 1 || root == NULL) {
    if(arr[d] == 0) arr[d] = root -> data;
    return;
  }
  level(root -> left, n - 1, arr, d - 1);
  level(root -> right, n - 1, arr, d + 1);
}

int height(struct tree *root) {
  if(root == NULL) return 0;
  int l = height(root -> left);
  int r = height(root -> right);
  if(r > l)
    return 1 + r;
  return 1 + l;
}*/
int arr[100] = {0};
int lev[100] = {0};
void func(struct tree *root,int n, int d) {
       if(root == NULL) return; 
       if(arr[d] == 0 || lev[d] > n) {
            arr[d] = root -> data;
            lev[d] = n;
        }
    func(root -> right, n + 1, d + 1);
    func(root -> left, n + 1, d - 1);
}

int main() {
  struct tree *root = newn(1);
  struct tree *curr = root;
  curr -> left = newn(2);
  curr -> right = newn(3);
  curr ->left->right = newn(4);
  curr->left->right->right = newn(5);
   curr->left->right->right->right = newn(6);
   curr->left->right->right->right->right = newn(7);

  curr->right->left = newn(8);
  curr->right->right = newn(9);

  /*int *arr = (int *)malloc(sizeof(int) * 20);
  topview(root, arr);*/
  func(root, 1, 50);
  int i = 0;
  while(arr[i] == 0) i++;
  while(arr[i] != 0) {
    printf("%d ", arr[i++]);
  }
  printf("\n");
}
