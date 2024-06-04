#include<stdio.h>

main()
{
	int r;
	
	printf("enter element : ");
	scanf("%d",&r);
	
	int a[r],i;
	
	for(i=0;i<r;i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	
	printf("user element  :  ");
	
	for(i=0;i<r;i++)
	{
			printf("%d ",a[i]);
	}
	
	printf("\neven Number : ");
	
	for(i=0;i<r;i++)
	{
			if(a[i] % 2 == 1)
			{
				printf("%d ",a[i]);
			}
	}
}
