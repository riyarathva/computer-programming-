#include<stdio.h>
#include<conio.h>
int main()
{
   float gross,allowances,deducations,net;
   printf("enter gross salary:");
   scanf("%f",&gross);
   if(gross>1000)
   {

   allowances=0.10*gross;
   deducations=0.03*gross;
   }
    else
        if(gross>500)
   {
   allowances=0.07*gross;
   deducations =0.02*gross;
   }
   else

   {

   allowances=0;
   deducations=0;
   }

   net=gross+allowances-deducations;
   printf("net salary=%.2f\n",net);

   getch();
   return 0;
   }
