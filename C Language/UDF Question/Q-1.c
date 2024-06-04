#include<stdio.h>

int revers(int num,int rem,int rev)
{
	if(num==0)
	{
		return rev;
	}
	else
	{
		rem = num%10;
		rev = rev*10+rem;
		num/=10;
		
		revers(num,rem,rev);
	}
}

void main()
{
	int num,r;
	
	printf("enter a num: ");
	scanf("%d",&num);	
	
	r = revers(num,0,0);
	
	printf("revers : %d",r);
}


