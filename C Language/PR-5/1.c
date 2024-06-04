#include<stdio.h>

main()
{
	int i,n;
	
	printf("enter array size: ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nnegative elements Of arry : ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d, ",a[i]);
		}
	}
}
