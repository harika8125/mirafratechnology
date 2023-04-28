#include<stdio.h>
void strcpy1(char d[] ,char s[]);
int main()
{
	char s[100];
	char d[100];
	printf("enter source and destination strings\n");
	scanf("%s %s",s,d);
	strcpy1(d,s);
	printf("destination string %s\n",d);
}

void strcpy1(char d[],char s[])
{
	for(;*s!=0;)
	{
		*d++ = *s++;
	}
	*d=0;
}
