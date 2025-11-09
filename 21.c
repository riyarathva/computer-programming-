#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the gross salary:");
scanf("%d",&a);
printf("Enter the allowance:");
scanf("%d",&b);
printf("Enter the deduction:");
scanf("%d",&c);
d=a+b-c;
printf("The net salary= %d",d);
}
