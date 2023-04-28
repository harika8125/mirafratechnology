#include<stdio.h>
void strncpy1(char *d,char *s,int n);
int main()
{
	char d[100];
	char s[100];
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	printf("enter source and destination\n");
	scanf("%s %s",s,d);
	strncpy1(d,s,n);
	printf("destination string is %s\n",d);
}

void strncpy1(char *d,char *s,int n)
{
int i;
for(i=0;i<n;i++)
	{
		*d++=*s++;
	}
		
}
