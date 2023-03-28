// Implement string atoi function

#include<stdio.h>
int atoi(char s[]);
int main()
{
	int x;
	char s[10];
		printf("enter string\n");
	scanf("%s",s);
		x=atoi(s);
	printf("string character to integer :%d\n",x);
}

int atoi(char s[])
{
	int i,sum=0;
	for(i=0;s[i]!='\0';i++)
	{
		sum=sum*10;
		sum=sum+s[i]-48;
	}
	return sum;
}

