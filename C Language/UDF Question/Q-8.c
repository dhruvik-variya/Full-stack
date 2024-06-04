#include<stdio.h>

void alphabet(int s,int e)
{
	if(s<=e)
	{
		if(s%3==0 && s%5==0)
		{
			printf("%d  ",s);	
		}
		s++;
		alphabet(s,e);	
	}
	
}

main()
{
	alphabet(1,100);
}


