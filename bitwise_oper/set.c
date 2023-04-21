#include<stdio.h>
int main()
{
int n,p;
printf("enter n and p value\n");
scanf("%d %d",&n,&p);
n=(n|(1<<p));
printf("%d\n",n);
}

