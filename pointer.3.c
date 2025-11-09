#include <stdio.h>

int main() {
    int a[3][3], *p;
    int max, min;

    printf("Enter 9 elements:\n");
    for (p = &a[0][0]; p <= &a[2][2]; p++)
        scanf("%d", p);

    max = min = a[0][0];

    for (p = &a[0][0]; p <= &a[2][2]; p++) {
        if (*p > max)
            max = *p;
        if (*p < min)
            min = *p;
    }

    printf("Largest = %d\nSmallest = %d", max, min);
    return 0;
}
