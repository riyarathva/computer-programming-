#include <stdio.h>

void bubble_sort(int a[], int n, int ascending) {
    int i, j, temp;
    for(i = 0; i < n-1; ++i) {
        for(j = 0; j < n-1-i; ++j) {
            if ((ascending && a[j] > a[j+1]) || (!ascending && a[j] < a[j+1])) {
                temp = a[j]; a[j] = a[j+1]; a[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[5], i, choice;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; ++i) scanf("%d", &arr[i]);

    printf("Enter 1 for ascending, 0 for descending: ");
    scanf("%d", &choice);

    bubble_sort(arr, 5, choice==1);
    printf("Sorted array:\n");
    for(i = 0; i < 5; ++i) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
