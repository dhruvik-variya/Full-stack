#include<stdio.h>

main()
{
	int r,c;
	float sum=0;
	
	printf("Enter Row Size : ");
	scanf("%d",&r);
	
	printf("Enter Column Size : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	printf("\n\nEnter Array Element :\n");
	
	int i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum += a[i][j];
		}
	}
	
	printf("\n\navg Of an array : %.2f",sum/(r*c));
}
