#include <stdio.h>

void shift_left(int a[], int n, int sh) {
    int i;
    for(i=0;i<10-sh;i++) a[i] = a[i+sh];
    for(; i<10; i++) a[i]=0;
}

void shift_right(int a[], int sh) {
    int i;
    for(i=9;i>=sh;i--) a[i] = a[i-sh];
    for(i=0;i<sh;i++) a[i]=0;
}

int main() {
    int a[10], i, sh, dir;
    printf("Enter 10 elements:\n");
    for(i=0;i<10;i++) scanf("%d",&a[i]);

    printf("Enter shift positions (n): ");
    scanf("%d",&sh);
    if(sh < 0) sh = 0;
    if(sh > 10) sh = 10;

    printf("Enter 0 for left shift, 1 for right shift: ");
    scanf("%d",&dir);

    if(dir==0) shift_left(a, 10, sh);
    else shift_right(a, sh);

    printf("After shift:\n");
    for(i=0;i<10;i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
