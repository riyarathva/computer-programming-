#include <stdio.h>
#include <math.h>

int main() {
    int n, original, rem, sum = 0, digits = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    original = n;
    int temp = n;

    // Count digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = original;
    while(temp != 0) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
