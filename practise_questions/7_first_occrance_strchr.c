//Implement string strchr function

#include<stdio.h>
int mystrchr (char s[],char c);
int main()
{
	char s[20],c;
	int d;
	printf("enter s string\n");
	scanf("%s",s);
	printf("enter c charcter\n");
	scanf(" %c",&c);
	d=mystrchr(s,c);
	printf("first occurance:%d\n",d);
}

int mystrchr (char s[],char c)
{
	int i;
	for(i=0;s[i]!=0;i++)
	{

		if(s[i]==c)
			return i;
	}
}

