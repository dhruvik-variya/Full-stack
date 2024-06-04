#include<stdio.h>

main()
{
	int r,c,i,j;
	
	printf("Enter Row : ");
	scanf("%d",&r);
	
	printf("Enter Column : ");
	scanf("%d",&c);
	
	int a[r][c];
	
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
	
	int r1,s1=0;
	
	printf("\n\nEnter Any Number Of Row : ");
	scanf("%d",&r1);
	
	printf("Elements Of Row No %d : ",r1);
	
		for(j=0;j<c;j++)
		{
			s1 += a[r1][j];
			printf("%d, ",a[r1][j]);
		}
	
	printf("\nSum Of No %d Row's Elements : %d",r1,s1);
	
	int c1,s2=0;
	
	printf("\n\nEnter Any Number Of Column : ");
	scanf("%d",&c1);
	
	printf("Elements Of Row No %d : ",c1);
	
	for(i=0;i<r;i++)
	{
		printf("%d, ",a[i][c1]);
		s2 += a[i][c1];
	}
	printf("\nThe Sum Of Column %d : %d",c1,s2);	
}
