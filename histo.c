#include<stdio.h>
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

int histo(int arr[], int n) {
    stack *stk = createStack();
    int area;
    int max = -1;
    int i = 0;
    while(i < n) {
        if(isEmpty(stk) == 1 || arr[peek(stk)]  <= arr[i]) { 
            push(stk, i);
            i++;
    	}
    	else {
            int top = peek(stk);
            pop(stk);
            if(isEmpty(stk) == 1) area = arr[top] * i;
            else area = arr[top] * (i - peek(stk) - 1);
            if(area > max) max = area;
        }
    }
    while(isEmpty(stk) == 0) {
         int top = peek(stk);
            pop(stk);
            if(isEmpty(stk) == 1) area = arr[top] * i;
            else area = arr[top] * (i - peek(stk) - 1);
            if(area > max) max = area;
    }
    return max;
}
int main() {
    int *arr = (int *)malloc(sizeof(int)*100);
    int i = 0;
    while(1) {
        int x;
        scanf("%d", &x);
        if(x == -1) break;
        arr[i++] = x;
    }
    printf("%d\n",histo(arr, i));
}
        

     
