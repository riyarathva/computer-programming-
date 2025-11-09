#include <stdio.h>

int main() {
    int arr[10], n=5, i;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    if(n>0) n--; // drop last

    printf("Array after deleting last element:\n");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
