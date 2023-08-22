#include<stdio.h>
void bubble()
{
int i,j,temp,n,flag;
        printf("enter the array size\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements\n");
        for(i=0;i<n;i++)
                scanf("%d",&arr[i]);	
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
				
			}
			
		}
		
		if(flag==0)
			break;
	}
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);

	printf("\n");
}

