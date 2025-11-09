#include<stdio.h>
void main()
{
int L,B,A,P;
printf("Enter the length:");
scanf("%d",&L);
printf("Enter the breadth:");
scanf("%d",&B);
A=L*B;
P=2*(L+B);
printf("Area=%d*%d=%d.",L,B,A);
printf("Perimeter=2*(%d+%d)=%d.",L,B,P);
}
