#include<stdio.h>
void strupr1(char *s);
int main()
{
	char s[100];
	printf("enter a string\n");
	scanf("%s",s);
	strupr1(s);
	printf("%s\n",s);
}

void strupr1(char *s)
{
	int i;
	for(i=0;*s!=0;i++)
	{
		if(*s>='a'&&*s<='z')
		{
			*s=*s-32;
		}
	*s++;	
	}
}
