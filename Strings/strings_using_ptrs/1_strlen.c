#include<stdio.h>
int strlen1(char s[]);
int main()
{
	char s[100];
	int l;
	printf("enter a string\n");
	scanf("%s",s);
	l=strlen1(s);
	printf("%d\n",l);
}

int strlen1(char s[])
{
	int i=0;
	while(*s)
	{
		i++;
		*s++;
	}
	return i;
}
