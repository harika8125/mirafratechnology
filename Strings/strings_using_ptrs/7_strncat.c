#include<stdio.h>
void strncat1(char *d,char *s,int n);
int main()
{
	char s[100];
	char d[100];
	int n;
	printf("enter a source and destination string\n");
	scanf("%s %s",s,d);
	printf("enter n value\n");
	scanf("%d",&n);
	strncat1(d,s,n);
	printf("%s\n",d);
}

void strncat1(char *d,char *s,int n)
{
	int i=0,j=0;
	while(*d!=0)
	{
		i++;
		*d++;
	}
	for(;j<n;j++)
	{
		*d++=*s++;
	}
	*d=0;
}

