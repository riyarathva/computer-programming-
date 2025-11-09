#include <stdio.h>

int main() {
    int arr[10], n=5, i, val;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to insert at beginning: ");
    scanf("%d",&val);

    // shift right
    for(i=n; i>0; i--) arr[i] = arr[i-1];
    arr[0] = val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
