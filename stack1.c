#include<stdio.h>
#include<stdlib.h>
struct stack {
    int *arr;
    int top;
};
struct stack *initialize(int x) {
    struct stack * mem= (struct stack *)malloc(sizeof(struct stack));
    (mem->arr) = (int*)malloc(sizeof(int)*x);
    mem -> top = -1;
    return mem;
}
void insert(struct stack *mem, int n) {
    mem -> arr[++(mem -> top)] = n;
}
void display(struct stack *mem) {
    int i;
    for(i = 0;i <= mem -> top; i++)
    {
        printf("%d ",mem->arr[i]);
    }
}
int isFull(struct stack * nn, int n) {
    if((nn -> top) ==n)
        return 1;
    return 0;
} 

int main() {
    struct stack *nn;
    nn = initialize(5);
    insert(nn, 1);
    insert(nn, 2);
    insert(nn, 3);
    insert(nn, 4);
    if(isFull(nn, 5))
        printf("Stack is Full\n");
    else
        printf("Stack is Not Full\n");

    display(nn);
}	
