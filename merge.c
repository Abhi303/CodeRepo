#include<stdio.h>
#include<stdlib.h>
void merge();
void mergeSort(int *a, int *aux, int start, int end)
{
    if(end <= start) return;
    int mid = (start + end) / 2;
    mergeSort(a, aux, start, end);
    mergeSort(a, aux, mid + 1, end);
    merge(a, aux, start, mid, end);
}

void merge(int *a, int *aux, int start, int mid, int end)
{
    int i = start, j = mid+1, k = 0;
    while(i <= mid || j <= end)
    {
        if(i > mid)
        {
            while( j <= end)
            {
                aux[k++] = a[j++];
            }
            break;
        }
        if(j > end)
        {
            while(i <= mid)
            {
                aux[k++] = a[i++];
            }
            break;
        }
        if(a[i] > a[j])
        {
            aux[k++] = a[j++];
        }
        else
        {
            aux[k++] = a[i++];
        }
    
    }
}
     

int main()
{
    int n, i;
    
    printf("Enter Number of Elements = ");
    scanf("%d", &n);
    int *aux = (int *)malloc(sizeof(int) * n);
    int *a = (int *)malloc(sizeof(int) * n);
    

        scanf("%d", &a[i]);
    }
    mergeSort(&a, &aux, 0, n-1);
    for(i = 0;i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
