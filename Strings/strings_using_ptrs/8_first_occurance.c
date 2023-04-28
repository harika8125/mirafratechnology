#include<stdio.h>
int strchr1(char *s,char c);
int main()
{
	char s[100],c;
	int l;
	printf("enter string\n");
	scanf("%s",s);
	printf("enter character\n");
	scanf(" %c",&c);
	l=strchr1(s,c);
	printf("%d\n",l);
}

int strchr1(char *s,char c)
{
	int i;
	for(i=0;*s!=0;i++)
	{
		if(*s==c)
			return i;
		*s++;

	}	
	return -1;
}
