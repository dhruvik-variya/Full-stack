#include<stdio.h>

main()
{
	int i,x,y;
	
	printf("enter first year : ");
	scanf("%d",&x);
	
	printf("enter second year : ");
	scanf("%d",&y);
	
	int a[y];
	
	printf("\n\n Leap Years : \n\n");
	
	for(i=x;i<=y;i++)
	{
		if(i%4==0)
		{
			a[i]=i;
			printf("%d ",a[i]);
		}
	}
	
}
