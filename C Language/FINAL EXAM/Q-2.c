#include<stdio.h>

main()
{
	int r,c;
	
	printf("enter row : ");
	scanf("%d",&r);
	
	printf("enter column : ");
	scanf("%d",&c);
	
	int a[r][c],i,j,sum;
	
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
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+= a[i][j];	
		}	 
	}	
	printf("\n\n Sum of all element : %d ",sum);
	
	printf("\nAVG : %d ",(sum/(r*c)));	
	
}
