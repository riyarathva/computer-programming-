#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,c;
   float total,avg;

   printf("enter marks of 3 subject:");
   scanf("%d %d %d ",&a,&b,&c);

    if(a<35||b<35||c<35)
    {
    printf("fail \n");
    }

    else
    {
    total=a+b+c;
    avg=total/3;
    printf("total =%.2f,average=%.2f\n",total,avg);


    if (avg>=70)
     printf("grade:distinction\n");
     else if(avg>=60)
     printf("grade:first class \n");
     else if(avg>=50)
     printf("grade:second class\n");
     else if(avg>=35)
     printf("grade=third class\n");
     else
     printf("fail\n");
     }
return 0;
     }
