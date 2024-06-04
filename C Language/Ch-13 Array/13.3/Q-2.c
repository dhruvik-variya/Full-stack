#include<stdio.h>

main()
{
	int r,c;
	float sum=0;
	
	printf("Enter Row Size : ");
	scanf("%d",&r);
	
	printf("Enter Column Size : ");
	scanf("%d",&c);
	
	int i,j,x[r][c],y[r][c],z[r][c];
	
	printf("\n>>>>>>>>>>>enter first array<<<<<<<<<<<\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	
	printf("\n>>>>>>>>>>>enter second array<<<<<<<<<<<\n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("b[%d][%d] : ",i,j);
			scanf("%d",&y[i][j]);
		}
	}
	
	printf("\n\nSum Of array 1 and 2 elements : \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			z[i][j] = x[i][j] + y[i][j];
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
	
	
}
