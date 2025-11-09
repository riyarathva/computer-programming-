#include <stdio.h>

int main() {
    int a[10], i, j, freq;
    int counted[10] = {0}; // flags to track counted indices

    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++) scanf("%d",&a[i]);

    printf("Frequencies:\n");
    for(i=0;i<10;i++) {
        if (counted[i]) continue;
        freq = 1;
        for(j=i+1;j<10;j++) {
            if (a[j] == a[i]) {
                freq++;
                counted[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], freq);
    }
    return 0;
}
