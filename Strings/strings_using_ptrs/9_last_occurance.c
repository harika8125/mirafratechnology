#include<stdio.h>
int strrchr1(char *s,char c);
int main()
{
	char s[100],c;
	int l;
	printf("enter string\n");
	scanf("%s",s);
	printf("enter a character\n");
	scanf(" %c",&c);
	l=strrchr1(s,c);
	printf("%d\n",l);
}

int strrchr1(char *s,char c)
{
	int i=0;
	while(*s!=0)
	{
		*s++;
		i++;
	}
	for(i=i-1,*s--;i>0;i--)
	{
		if(*s==c)
		{
			return i;
		}
		*s--;	
	}
	return -1;
}


