#include <stdio.h>

int main() {
    int r=2,c=3; // example sizes
    int a[2][3], b[2][3], s[2][3];
    int i,j;

    printf("Enter 6 elements of matrix A (2x3):\n");
    for(i=0;i<2;i++) for(j=0;j<3;j++) scanf("%d",&a[i][j]);

    printf("Enter 6 elements of matrix B (2x3):\n");
    for(i=0;i<2;i++) for(j=0;j<3;j++) scanf("%d",&b[i][j]);

    for(i=0;i<2;i++) for(j=0;j<3;j++) s[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) printf("%d ", s[i][j]);
        printf("\n");
    }
    return 0;
}
