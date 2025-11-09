#include<stdio.h>
void main()
{
int a,b,c,d;
printf("Enter the number of bytes:");
scanf("%d",&a);
b= a/1024;
printf("%d/1024=%d is the bytes in KB.", a,b);
c= a/(1024*1024);
printf("%d/(1024*1024)= %d is the bytes in MB.", a,c);
d= a/(1024*1024*1024);
printf("%d/(1024*1024*1024)= %d is the bytes in GB.", a,d);
}
