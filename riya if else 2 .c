#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,c,largest,smallest;
  printf("enter three number:");
  scanf("%d %d %d ",&a,&b,&c);
  largest=a;
  smallest=a;
  if(b>largest) largest=b;
  if(c>largest) largest=c;
  if(b<smallest) smallest=b;
  if(c<smallest) smallest=c;
  printf("largest=%d\n",largest);
  printf("smallest=%d\n",smallest);
  getch();
}
