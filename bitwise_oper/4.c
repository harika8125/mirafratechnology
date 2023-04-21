#include<stdio.h>
int main()
{
int x;
printf("enter x value\n");
scanf("%d",&x);
if((x&(x-2))==0)
printf("power of 4\n");
else
printf("not a power of 4\n");
}
