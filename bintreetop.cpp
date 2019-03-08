#include<iostream>
#include<stack>
#include<stdlib.h>
using namespace std;

struct tree {
  struct tree *left;
  struct tree *right;
  int data;
};
struct tree *newn(int n) {
  struct tree *nn = (struct tree*)malloc(sizeof(struct tree));
  nn->data = n;
  nn->left = NULL;
  nn->right = NULL;
  return nn;
};
void topView(struct tree *root, int arr[], int d) {
  if(root == NULL) {
    return;
  }
  else {
    if(arr[d + 5] == 0) arr[d + 5] = root -> data;
    topView(root -> left, arr, d - 1);
    topView(root -> right, arr, d + 1);
    return;
  }
}

int main() {
  struct tree *root = newn(1);
  struct tree *curr = root;
  curr -> left = newn(2);
  curr -> right = newn(3);
  curr ->left->left = newn(4);
  curr->left->right = newn(5);
  curr->right->left = newn(6);
  curr->right->right = newn(7);
  stack<struct tree *> stk;  
  curr = root;
  int arr[100] = {0};
  topView(root, arr, 0);
  int i = 0;
  while(arr[i]==0)
    i++;
  while(arr[i]!=0) {
    cout<<arr[i]<<" ";
    i++;
  }
}


