#include<stdio.h>

main()
{
	int n,i;
	
	printf("enter array size : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nenter value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n<----Array---->");
	
	for(i=0;i<n;i++)
	{
		printf("\n\na[%d] : %d\n",i,a[i]);
	}
	
	printf("\n\nlength of array is : %d",n);
}
