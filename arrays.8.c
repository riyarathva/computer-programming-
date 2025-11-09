#include <stdio.h>

int main() {
    int src[5], dst[10];
    int i;
    printf("Enter 5 elements:\n");
    for(i=0;i<5;i++) scanf("%d",&src[i]);

    // initialize dst to 0
    for(i=0;i<10;i++) dst[i]=0;

    // copy skipping one element (every alternate slot)
    for(i=0;i<5;i++) dst[i*2] = src[i];

    printf("Destination array (10 elements):\n");
    for(i=0;i<10;i++) printf("%d ", dst[i]);
    printf("\n");
    return 0;
}
