#include <stdio.h>

int main() {
    int arr[20], n=5, i, pos, val;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter position to insert (1-based): ");
    scanf("%d",&pos);
    printf("Enter value: ");
    scanf("%d",&val);

    if(pos < 1 || pos > n+1) {
        printf("Invalid position\n");
        return 0;
    }

    for(i=n; i>=pos; i--) arr[i] = arr[i-1];
    arr[pos-1] = val;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
