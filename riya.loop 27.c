#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(int num = start; num <= end; num++) {
        int original = num, rem, sum = 0, digits = 0, temp = num;

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
            printf("%d\n", original);
    }
    return 0;
}
