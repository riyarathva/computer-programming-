#include <stdio.h>

int main() {
    int a[4][4], arr[16], k = 0;

    printf("Enter 16 elements of 4x4 matrix:\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);

    // Copy to 1D array
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            arr[k++] = a[i][j];

    // Sort array
    for (int i = 0; i < 16; i++)
        for (int j = i + 1; j < 16; j++)
            if (arr[i] > arr[j]) {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }

    printf("Sorted elements:\n");
    for (int i = 0; i < 16; i++)
        printf("%d ", arr[i]);

    return 0;
}
