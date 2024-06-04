#include<stdio.h>

void binary(int n,int x[],int m,int b)
{
	int i=0;
	do
	{
		m = n%2;
		n /= 2;

		x[i]=m;
		i++;
	}while(n!=0);
	
	for(i=i-1;i>=0;i--)
	{
			printf("%d",x[i]);	
	}
	
}


void main()
{
	int n,a,m,b;
	int x[9];
	
	printf("enter a value : ");
	scanf("%d",&n);
	
	binary(n,x,0,0);
	
}


