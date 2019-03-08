#include<stdio.h>
int main() {
    int arr[] = {1,2,3,4,5};
    int *a[5];
    a[0] = &arr[0];
    a[1] = &arr[1];
    a[2] = &arr[2];
    a[3] = &arr[3];
    int i;
    for(i = 0; i < 4; i++) printf("Address = %p\nValue = %d\n",a[i],*a[i]);
}
