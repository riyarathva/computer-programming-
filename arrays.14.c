#include <stdio.h>

int main() {
    int arr[10], n=5, i, val;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to append: ");
    scanf("%d",&val);
    arr[n] = val;
    n++;

    printf("Array after append:\n");
    for(i=0;i<n;i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
