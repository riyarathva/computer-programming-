#include <stdio.h>

int main() {
    int arr[10], n=10, i, val, found = 0;
    printf("Enter 10 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to search: ");
    scanf("%d",&val);

    printf("Found at positions (0-based): ");
    for(i=0;i<n;i++) {
        if(arr[i] == val) {
            printf("%d ", i);
            found = 1;
        }
    }
    if(!found) printf("None");
    printf("\n");
    return 0;
}
