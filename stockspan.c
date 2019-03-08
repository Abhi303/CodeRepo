nclude<stdio.h>
#include<stdlib.h>
typedef struct node {
    struct node *next;
    int data;
}Node;
typedef struct st {
    Node *ll;
}stack;

int isEmpty(stack *stk ) {
    if(stk -> ll == NULL) return 1;
    return 0;
}

Node * createNode(int val) {
    Node *nn = (Node *)malloc(sizeof(Node));
    nn -> data = val;
    nn -> next = NULL;
    return nn;
}
stack *createStack() {
    stack *stk = (stack *)malloc(sizeof(stack));
    stk -> ll = NULL;
    return stk;
}

void push(stack *stk, int val) {
    if(isEmpty(stk)) {
        stk->ll = createNode(val);
    }
    else {
    Node *nn = createNode(val);
    nn -> next = stk -> ll;
    stk -> ll = nn;
    }
}

int peek(stack *stk) {
    return stk -> ll -> data;
}

void pop(stack *stk) {
    Node *temp = stk -> ll;
    stk->ll = stk -> ll -> next;
    temp = NULL;
    free(temp);
}

void stock(int arr[], n) {
    stack *stk = createStack();
    arr[0] = 1;
    psuh(stk, 0);
    int i;
    for(i = 1;i < n; i++) {
        if(isEmpty(stk) == 0 && arr[peek(stk)] >= arr[i]) {
            pop(stk);
        else {
        arr[i] = (isEmpty(stk) ? i : i - peek(stk));
    	}
    }
}

int main() {
    int i = 0;
    
    while(1) {
        int a;
        scanf("%d",&a);
        arr[i++] = a;
    }
    stock(arr, i);
    int n = i;
    for(i = 0; i < n; i++) printf("%d\n",arr[i]);
}
