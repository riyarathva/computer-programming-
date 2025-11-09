#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
    }
}

int main() {
    int a[5], i, max, min;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    findMaxMin(a, 5, &max, &min);
    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}
