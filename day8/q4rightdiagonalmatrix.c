#include<stdio.h>
void main()
{
	int a[3][3];
	int sum=0;
	int i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
	printf("enter the matrix");
	scanf("%d",&a[i][j]);	
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
					}
		}
	}printf("the right diagonal of sum is %d",sum);
	
}
