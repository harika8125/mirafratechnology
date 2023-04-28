#include<stdio.h>
void strcat1(char *s,char *d);
int main()
{
	char s[100];
	char d[100];
	printf("enter a source and destination string\n");
	scanf("%s %s",s,d);
	strcat1(s,d);
	printf("%s\n",d);
}

void strcat1(char *s,char *d)
{
	int i=0;
	while(*d!=0)
	{
		i++;
		*d++;
	}

	int j;
	for(;*s!=0;)
	{
		*d++=*s++;
	}
	*d=0;
}
