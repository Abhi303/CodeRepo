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
  while(1) {
    if(curr) {
      while(curr) {
      stk.push(curr);
      curr = curr -> left;
}
    }
  else {
    if( stk.top() -> right == NULL) {
      cout<<stk.top() -> data;
      curr = stk.top();
      stk.pop();
    }
  while(!stk.empty() && stk.top()->right == curr) {
    curr = stk.top();
    stk.pop();
    cout<<curr->data<<endl;
  }
  }
  if(stk.empty())
    break;
  curr = stk.top()->right;
}
}

