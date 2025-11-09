#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the two numbers to add:");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d+%d=%d\n",a,b,c);

int d,e,f;
printf("Enter the two numbers to subtract:");
scanf("%d%d",&d,&e);
f=d-e;
printf("%d-%d=%d\n",d,e,f);

int h,i,j;
printf("Enter the two numbers to multiply:");
scanf("%d%d",&h,&i);
j=h*i;
printf("%d*%d=%d\n",h,i,j);

int x,y,z;
printf("Enter the two numbers to divide:");
scanf("%d%d",&x,&y);
z=x/y;
printf("%d/%d=%d\n",x,y,z);
}
