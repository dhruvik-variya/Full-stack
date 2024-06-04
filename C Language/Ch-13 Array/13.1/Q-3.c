#include<stdio.h>

main()
{
	int n,i;
	
	printf("enter array size : ");
	scanf("%d",&n);
	
	int x[n],y[n],z[n];
	
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter value a[%d] : ",i);
		scanf("%d",&x[i]);
	}
	printf("\n.................................................\n\n");
	for(i=0;i<n;i++)
	{
		printf("enter value b[%d] : ",i);
		scanf("%d",&y[i]);
	}
	
	for(i=0;i<n;i++)
	{
		z[i]=x[i]+y[i];
		printf("\n\nC[%d] : %d\n",i,z[i]);
	}
}
