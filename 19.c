#include<stdio.h>
int main()
{
double A,R;
printf("Enter the radius:");
scanf("%lf",&R);
const double PI=3.14;
A=PI*R*R;
printf("The area of circle = %.2lf\n.",A);
}
