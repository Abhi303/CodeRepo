#include<stdio.h>

int lowerBound( int arr[], int n) {
    int i;
    int l = 0;
    int r = 12;
    while(l < r) {
        int mid = (l + r) / 2;
        if(arr[mid] >= n) r = mid;
        else l = mid + 1;
    }
    return l;
}
int main() {
    int arr[] = {1,1,2,2,2,2,2,3,4,5,6};
    int n;
    scanf(" %d", &n);
    printf("Position of %d = %d\n", n, lowerBound(arr, n));
}
