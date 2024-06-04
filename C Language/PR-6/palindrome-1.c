#include<stdio.h>

main()
{
	char name[20];
	char rev[20];
	
	printf("Enter Your Name : ");
	scanf("%[^\n]",&name);
	
	int i,l,len,c=1;
	
	for(i=0;name[i]!=NULL;i++)
	{
		len++;
	}
	
	l = len;
	len--;
	
	for(i=0;i<l;i++,len--)
	{
		rev[len-1] = name[i];
	}
	
	for(i=0;name[i]!=NULL;i++)
	{
		if(name[i]==rev[i])
		{
			c = 0;
		}
		break;	
	}
	
	(c==0)
		?printf("this string is Palindrome")
		:printf("this string is not Palindrome");	
	
}
