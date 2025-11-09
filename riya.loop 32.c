#include <stdio.h>

int main() {
    int i, j, count = 0, isPrime;

    for(i = 2; i <= 500; i++) {
        isPrime = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
            count++;
    }

    printf("Number of prime numbers between 1 and 500 = %d\n", count);
    return 0;
}
