#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number of Elements");
    scanf("%d", &n);
    int *a = (int *)malloc(sizeof(int) * n);
    for(i = 0;i < n; i++)
    {
        scanf("%d", &a[i]);
    } 
















