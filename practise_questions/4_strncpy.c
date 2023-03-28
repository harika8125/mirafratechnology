// implement stringncopy function

#include<stdio.h>
void strncpy1(char d[],char s[],int n);
int main()
{
	int n;
	char d[100];
	char s[100];
	printf("enter n value\n");
	scanf("%d",&n);
	printf("enter two strings\n");
	scanf("%s %s",d,s);
	strncpy1(d,s,n);
	printf("after copying destination is %s\n",d);
}


void strncpy1(char d[],char s[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		d[i]=s[i];
	}
	
}
