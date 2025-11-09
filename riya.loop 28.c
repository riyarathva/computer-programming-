#include <stdio.h>

int main() {
    int n, coef = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        coef = 1;
        for(int space = 0; space < n - i - 1; space++)
            printf(" ");
        for(int j = 0; j <= i; j++) {
            printf("%d ", coef);
            coef = coef * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
