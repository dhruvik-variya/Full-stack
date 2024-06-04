#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Size of array : ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("Enter Value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\nThe Squares are : ");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]*a[i]);
	}
}
