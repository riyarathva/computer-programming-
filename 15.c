#include<stdio.h>
void main()
{
int a,b;
printf("Enter the temperature in fahrenheit:");
scanf("%d",&a);
b= (a-32)*5/9;
printf("(%d-32)*5/9=%d is the temperature in celcius.", a,b);
}
