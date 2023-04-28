//Implement string strstr function.

#include<stdio.h>
int strstr1(char str[],char sub[]);
int main()
{
	char str[100];
	char sub[100];
	int x;
	printf("enter the string and substring\n");
	scanf("%99[^\n]s",str);
	scanf("%s",sub);
	x=strstr1(str,sub);
	if(x>0)

		printf("substring is present\n");
	else
		printf("substring is not present\n");
}

int strstr1(char str[],char sub[])
{
	int i=0,j;
	for(j=0;str[j]!='\0';j++)
	{
		if(str[j]==sub[i])
		{
			i++;
		}
		else
			i=0;
		if(sub[i]==0)
			return j+1;
	}
}

