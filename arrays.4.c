#include <stdio.h>

int main() {
    int denoms[] = {500,200,100,50,20,10,5,2,1};
    int count[9] = {0}, i;
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    for(i = 0; i < 9; ++i) {
        count[i] = amount / denoms[i];
        amount %= denoms[i];
    }

    printf("Notes:\n");
    for(i = 0; i < 9; ++i) {
        if (count[i] > 0) printf("%d x %d\n", count[i], denoms[i]);
    }
    return 0;
}
