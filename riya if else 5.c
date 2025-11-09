#include<stdio.h>
#include<conio.h>
int main()
{
  float gross,discount,net;
  printf("enter gross sales:");
  scanf("%f",&gross);

  if(gross>2000)
  discount=0.15*gross;
  else if(gross>10000)
  discount=0.10*gross;
  else
  discount=0.05*gross;
  net=gross-discount;
  printf("net sales = %.2f\n",net);
  getch();
  return 0;
  }
