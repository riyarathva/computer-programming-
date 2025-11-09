#include<stdio.h>
#include<conio.h>
int main()
{
 int num;
 printf("enter a number:");
 scanf("%d",&num);
  if(num%7==0)
  printf("%d is divisible by 7\n",num);
  else
  printf("%d is not divisible by 7\n",num);
  getch();
  return 0;
  }
