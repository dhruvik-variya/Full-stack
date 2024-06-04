#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter row : ");
	scanf("%d",&r);
	printf("enter column : ");
	scanf("%d",&c);
	
	int i,j,a[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	int n = a[0][0];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]>n)
			{
				n = a[i][j];	
			}
		}
	}
	
	printf("\nlargest element is : %d",n);
}
