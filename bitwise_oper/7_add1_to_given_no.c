//Add 1 to the given no. :  x = -(~x);


#include<stdio.h>
int main()
{
int n;
printf("enter a number\n");
scanf("%d",&n);
n=-(~n);
printf("%d",n);
}
