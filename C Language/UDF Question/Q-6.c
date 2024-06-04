#include<stdio.h>

void lrgnum(int i,int n,int a[],int size)
{
	n = a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>n)
		{
			n = a[i];
		}
	}
	
	printf("\nLarge element >>> : %d",n);
}

void main()
{
	int i,size,n;
	
	printf("Enter Array Size : ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	lrgnum(i,n,a,size);
}


