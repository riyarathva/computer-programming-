#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("Enter the marks of the three subjects:");
scanf("%d%d%d",&a,&b,&c);
d=(a+b+c)/2;
e=(a+b+c);
printf("The average of the marks= %d\n",d);
printf("The total of the marks= %d",e);
}
