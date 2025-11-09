#include <stdio.h>

int main() {
    int arr[10], n=6, i, val, pos=-1;
    printf("Enter 6 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Enter value to delete: ");
    scanf("%d",&val);

    for(i=0;i<n;i++) if(arr[i]==val) { pos = i; break; }

    if(pos == -1) {
        printf("Value not found\n");
    } else {
        for(i=pos;i<n-1;i++) arr[i] = arr[i+1];
        n--;
        printf("Array after deletion:\n");
        for(i=0;i<n;i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
