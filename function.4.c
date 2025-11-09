#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside function: x = %d, y = %d\n", x, y);
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap(a, b);
    printf("Outside function: a = %d, b = %d", a, b);
    return 0;
}
