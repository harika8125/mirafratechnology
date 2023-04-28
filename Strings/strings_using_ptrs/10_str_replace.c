#include<stdio.h>
void strrev1(char *s,char c1,char c2);
int main()
{
	char s[100],c1,c2;
	printf("enter a string\n");
	scanf("%s",s);
	printf("enter c1 character\n");
	scanf(" %c",&c1);
	printf("enter c2 character\n");
	scanf(" %c",&c2);
	strrev1(s,c1,c2);
	printf("%s\n",s);
}

void strrev1(char *s,char c1,char c2)
{
	int i;
	for(i=0;*s!=0;i++,*s++)
	{
		if(*s==c1)
		{
			*s=c2;
	
		}
	}
}
