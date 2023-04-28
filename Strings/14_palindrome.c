#include<stdio.h>
int palindrome(char s[]);
int main()
{
	int x;
	char s[100];
	printf("enter the string\n");
	scanf("%s",s);
	x=palindrome(s);
	if(x==1)
		printf("it is a palindrome\n");
	else
		printf("it is not a palindrome\n");
}

int palindrome(char s[])
{
	int i,j,k,l;
	for(l=0;s[l]!=0;l++);
	for(i=0,j=l-1;i<=j;i++,j--)
	{
		if(s[i]==s[j])
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


