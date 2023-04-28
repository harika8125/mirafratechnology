#include<stdio.h>
#include<string.h>
void reverse1(char s[]);
void word(char s[]);
int l;
int main()
{
	char s[100];
	printf("enter a string\n");
	scanf("%99[^\n]s",s);
	reverse1(s);
	word(s);
	printf("%s\n",s);
}
void reverse1(char s[])
{
	int i;
	char temp;
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		temp=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=temp;
	}
}


void word(char s[])
{
	int i,j=0,d;
	char temp;
	for(i=0;s[i]>=0;i++)
	{
		if(s[i]==' '||s[i]==0)
		{	
			d=i;
			for(i=i-1;i>0&&j<i;j++,i--)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
			i=d+1;
			j=d+1;
		}
	}
}
