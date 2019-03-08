#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct stack {
    struct node * top;
};
void insert(struct stack *stk, int d) {
    struct node *nn = (struct node *)malloc(sizeof(struct node));
    if(nn == NULL)
    {
        return;
    }
    else
    { 
        nn -> data = d;
        nn -> next = stk -> top;
        stk -> top = nn;
    }
}
int stockspan() {```````````````````````````````````````````````````````````````````````````````````````````````````````````````
int delete(struct stack * stk) {
    if(stk -> top == NULL) {
        return -1;
    }
    int temp = stk->top->data;
    struct node *t = stk ->top;
    stk -> top = stk->top->next;
    free(t);
    t = NULL;
}
void display(struct stack *stk) {
    struct node * nn = stk -> top;
    while(nn)
    {
        printf("%d ",nn -> data);
        nn = nn->next;
    }
}
int main() {
    struct stack * stk= (struct stack *)malloc(sizeof(struct stack));
    stk -> top = NULL;    
    insert(stk, 1);
    insert(stk, 2);
    insert(stk, 3);
    insert(stk, 4);
    display(stk);
    int arr[] = {100, 60, 70, 60, 75, 85};
    
}

