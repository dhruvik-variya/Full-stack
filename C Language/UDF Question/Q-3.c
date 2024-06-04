#include<stdio.h>

void Lyear(int start,int end)
{
	if(start <= end)
	{
		if( start % 4 == 0)	
		{
			printf("%d ",start);	
		}
		start++;
		
		Lyear(start,end);
	}
}

void main()
{
	int a,b;
	
	printf("enter a first year : ");
	scanf("%d",&a);
	
	printf("enter a second year: ");
	scanf("%d",&b);
	
	printf("Leap year :");
	
	Lyear(a,b);
}


