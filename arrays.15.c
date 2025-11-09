#include <stdio.h>

int main() {
    int arr[10], n=5, i;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    // delete first
    for(i=0;i<n-1;i++) arr[i] = arr[i+1];
    n--;

    printf("Array after deleting first element:\n");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
