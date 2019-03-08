#include<stdio.h>
#include<stdlib.h>
struct node {
    int val;
    struct node *next;
};

void insert(struct node *root, int data) {
    struct node * curr = root;
    while(curr->next) curr = curr -> next;
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    nn -> val = data;
    curr -> next = nn;
    nn -> next = NULL;
}

int checkLoop(struct node *root) {
    struct node *slowptr = root;
    struct node *fastptr = root;
    while(slowptr == root || fastptr != slowptr) {
        slowptr = slowptr -> next;
        fastptr = fastptr->next-> next;
    }
    fastptr = root;
    while(slowptr != fastptr) {
        slowptr = slowptr -> next;
        fastptr = fastptr -> next;
    }
    printf("%d\n",slowptr -> val);
    if(slowptr == NULL) return 0;
    return 1;
}

int main() {
    struct node *root = (struct node *)malloc(sizeof(struct node));
    root->val = 1;
    root -> next = NULL;
    insert(root, 2);
    insert(root,3);
    struct node *curr = root;
    struct node *curr1 = root;
    curr = root;
    while(curr->next) curr = curr -> next;
    insert(root,4);
    insert(root, 5);
    insert(root, 6);
    while(curr1->next) curr1 = curr1->next;
    curr1 -> next = curr;
    if(checkLoop(root)) printf("Loop");
    else printf("No Loop");
}
