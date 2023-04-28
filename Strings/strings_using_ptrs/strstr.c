#include<stdio.h>
int strstr1(char str[],char sub[]);
int main()
{
	char str[100];
	char sub[100];
	int x;
	printf("enter string and substring\n");
	scanf("%s %s",str,sub);
	x=strstr1(str,sub);
	if(x>=0)
	{
		printf("index of string %d\n",x);
	}
	else
		printf("index of string is not found\n");
}

int strstr1(char str[],char sub[])
{
	int i,j,a;
	for(i=0;str[i]!=0;i++)
	{
		j=0;
		if(str[i]==sub[j])
		{
			a=i;
			for(j=0;sub[j]!=0;j++)
			{
				if(str[a]!=sub[j])
				{
					break;
				}
				a++;
			}
			if(sub[j]==0)
				return i;
		}
	}
	return -1;
}
