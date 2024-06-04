#include<stdio.h>

main()
{
	int n,sum=0,i;
	
	printf("enter size : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n<----Array---->");
	
	for(i=0;i<n;i++)
	{
		printf("\n\na[%d] : %d\n",i,a[i]);
		sum += a[i];
	}
	
	printf("\n\navg of array is : %d",sum/n);
}
