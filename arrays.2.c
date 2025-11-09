#include <stdio.h>

int main() {
    int arr[10], i;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; ++i) scanf("%d", &arr[i]);

    printf("4th: %d\n7th: %d\n9th: %d\n", arr[3], arr[6], arr[8]);
    return 0;
}
