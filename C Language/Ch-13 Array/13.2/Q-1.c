#include<stdio.h>

main()
{
	int x,y,i;
	
	printf("enter first array size: ");
	scanf("%d",&x);
	int a[x];
	
	printf("enter second array size : ");
	scanf("%d",&y);
	
	int b[y],mrg[x+y];
	
	printf("\n\n>>>>>> ARRAY 1 <<<<<<<<<\n\n");
	
	for(i=0;i<x;i++)
	{
		printf("enter array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n>>>>>> ARRAY 2 <<<<<<<<<\n\n");
	
	for(i=0;i<y;i++)
	{
		printf("enter array b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<x;i++)
	{
		mrg[i] = a[i];
	}
	
	for(i=0;i<x+y;i++)
	{
		mrg[i+x] = b[i];
	}
	
	printf("\n\n>>>>>>>>>>Mrg Array<<<<<<<<<<\n\n");
	
	for(i=0;i<x+y;i++)
	{
		printf("mrg[%d] = %d\n",i,mrg[i]);
	}
}
