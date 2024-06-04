#include<stdio.h>

void alphabet(char s,char e)
{
	if(s<=e)
	{
		printf("%c   ",s);
		start++;
		alphabet(s,e);
	}
}

main()
{
	alphabet('A','Z');
}


