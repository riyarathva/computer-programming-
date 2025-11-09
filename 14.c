#include<stdio.h>
void main()
{
int a,b;
printf("Enter the temperature in celcius:");
scanf("%d",&a);
b= (a*9/5)+32;
printf("(%d*9/5)+32=%d is the temperature in fahrenheit.", a,b);
}
