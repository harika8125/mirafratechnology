#include<stdio.h>
void strlwr1(char s[]);
int main()
{
	char s[100];
	printf("enter a string\n");
	scanf("%s",s);
	strlwr1(s);
	printf("%s\n",s);
}

void strlwr1(char s[])
{
	int i;
	for(i=0;*s!=0;i++)
	{
		if(*s>='A'&&*s<='Z')
		{
			*s=*s+32;
		}
*s++;	
}
}
