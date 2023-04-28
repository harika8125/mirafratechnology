#include<stdio.h>
void strlcpy(char *d,char *s,int n);
int main()
{
	char d[100];
	char s[100];
	int n;
	printf("enter source string\n");
	scanf("%[^\n]s",s);
	printf("enter destination string\n");
	scanf(" %[^\n]s",d);
	printf("enter no of characters to copy\n");
	scanf("%d",&n);
	strlcpy(d,s,n);
	printf("destination string is %s\n",d);
}

void strlcpy(char *d,char *s,int n)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		*d++=*s++;
	}
	*d='\0';
}

