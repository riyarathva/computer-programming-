#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    int decimal = 0, base = 1, rem;
    printf("Enter binary number: ");
    scanf("%lld", &n);

    while(n != 0) {
        rem = n % 10;
        decimal += rem * base;
        base *= 2;
        n /= 10;
    }
    printf("Decimal = %d", decimal);
    return 0;
}
