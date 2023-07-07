#include<stdio.h>
int main()
{
	int a,b,n,i,j;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	//printf("prime numbers are\n");
	for(i=a;i<=b;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}

		if(count ==2)

			printf("%d prime numbers are\n",i);
		else
			printf("%d not prime\n",i);
	}
}
	/*printf("not prime numbers are\n");
	for(i=a;i<=b;i++)
        {
                count=0;

	for(j=1;j<=i;j++)
	{
		if(i%j==0)
		{
			count++;
		}
	}
	if(count!=2)
		printf("%d\n",i);

}
}*/
