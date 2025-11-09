#include<stdio.h>

int main()
{
   int a,b;

   printf("enter two number:");
   scanf("%d %d" ,&a,&b);
   if(a>b)
   {
   printf("largest =%d,smallest=%d\n",a,b);
   }
   else
   {
   printf("largest = %d,smallest =%d\n",b,a);
   }

   return 0;
   }
