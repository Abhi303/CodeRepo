#include<stdio.h>
int main() {
    int arr[5] = {1,2,3,4,5};
    int (*a)[5];
    int ar[] = {2,2,3,4,5};
    a = &arr;
    a++;
    a = &ar;
    int i;
    for(i = 0; i < 5; i++) printf("%d\n",*(*a+i));
}
