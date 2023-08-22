//count no of digits 
   

#include<stdio.h>
int main()
{
	int n,count=0;;
	printf("enter a number\n");
	scanf("%d",&n);
	do
	{
		n=n/10;
		count++;
	}while(n!=0);
	printf("%d",count);
}
