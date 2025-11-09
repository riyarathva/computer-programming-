#include <stdio.h>

int main() {
    int m=2, n=2, p=2;
    int A[2][2], B[2][2], C[2][2];
    int i,j,k;

    printf("Enter matrix A (2x2):\n");
    for(i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&A[i][j]);

    printf("Enter matrix B (2x2):\n");
    for(i=0;i<n;i++) for(j=0;j<p;j++) scanf("%d",&B[i][j]);

    for(i=0;i<m;i++) {
        for(j=0;j<p;j++) {
            C[i][j] = 0;
            for(k=0;k<n;k++) C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Product matrix C:\n");
    for(i=0;i<m;i++){
        for(j=0;j<p;j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
