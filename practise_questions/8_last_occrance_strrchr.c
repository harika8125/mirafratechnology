#include<stdio.h>
int mystrrchr (char s[],char c);
int main()
{
	char s[20],c;
	int d;
	printf("enter the s string\n");
	scanf("%s",s);
	printf("enter c character\n");
	scanf(" %c",&c);
	d=mystrrchr(s,c);
	printf("last occurence:%d\n",d);
}

int mystrrchr(char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++);
	for(;i>=0;i--)
	{
		if(s[i]==c)
			return i;
	}
}

