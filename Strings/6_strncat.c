// Implement strncat function

#include<stdio.h>
void strncat1(char d[],char s[],int n);
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter two strings\n");
	scanf("%s %s",s,d);
	printf("enter n value\n");
	scanf("%d",&n);
	strncat1(d,s,n);
	printf("destination output is %s\n",d);
}


void strncat1(char d[],char s[],int n)
{
	int j=0;
	while(d[j]!=0)
	{
		j++;
	}

	int i;
	for(i=0;i<n;i++,j++)
	{
		d[j]=s[i];
	}
	d[j]=0;
}
