#include <stdio.h>

int main() {
    int a[5], i, n=5, t;
    printf("Enter 5 elements:\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n/2;i++) {
        t = a[i]; a[i] = a[n-1-i]; a[n-1-i] = t;
    }

    printf("Reversed:\n");
    for(i=0;i<n;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
