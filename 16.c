#include<stdio.h>
int main()
{
float I,P,R,N;
printf("Enter the values of Profit:");
scanf("%f",&P);
printf("Enter the value of Rate of interest:");
scanf("%f",&R);
printf("Enter the value of time period:");
scanf("%f",&N);
I=(P*R*N)/100;
printf("Simple interest= %.2f\n", I,P,R,N);
}
