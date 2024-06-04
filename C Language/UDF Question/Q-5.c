#include<stdio.h>

void Ascending_order(int size,int i,int a[],int j,int n)
{
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;	
			}	
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
}

void Descending_order(int size,int i,int a[],int j,int n)
{
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]<a[j])
			{
				n = a[i];
				a[i] = a[j];
				a[j] = n;	
			}	
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
}


void main()
{
	int size,i,j,n;
	
	printf("enter size : ");
	scanf("%d",&size);
	
	int a[size];
	
	for(i=0;i<size;i++)
	{
		printf("enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	
	printf("\n\n--Asending order\n");
	Ascending_order(size,i,a,j,n);
	
	printf("\n\n>>>Desending order<<<\n");
	Descending_order(size,i,a,j,n);
	
}




