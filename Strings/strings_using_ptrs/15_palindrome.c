#include<stdio.h>
#include<string.h>
int palindrome(char *s);
int main()
{
	int x;
	char s[100];
	printf("enter a string\n");
	scanf("%s",s);
	x=palindrome(s);
	if(x==1)
		printf("it is palindrome\n");
	if(x==0)
		printf("it is not a palindrome\n");
}

int palindrome(char *s)
{
	int i,j,k,l;
char *r=s;
	for(l=0;*r!=0;l++,r++);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		k=0;
		if(*(s+i)==*(s+j))
		{
			k=1;
		}
		else
		{
			break;
		}
	}
	if(k==1)
		return 1;
	else
		return 0;
}
