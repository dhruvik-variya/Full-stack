#include<stdio.h>
#include<string.h>

main()
{
	char pass[20];
	
	printf("enter your password : ");
	gets(pass);
	
	int i,num=0,len,capital=0,small=0,special=0,a;
	
	for(i=0;pass[i] != NULL ;i++)
		len++;
		
	for(i=0;pass[i] != NULL ; i++)
	{
		if(pass[i]>='A' && pass[i]<='Z')
		{
			capital++;
		}
		else if(pass[i]>='a' && pass[i]<='z')
		{
			small++;
		}
		else if(pass[i]>='0' && pass[i]<='9')
		{
			num++;
		}
		else
		{
			special++;
		}
	}
	
	printf("%d %d %d %d\n\n ",capital,small,special,num);
	
	( (num>=1) && (capital>=1) && (small>=1) && (special>=1) && (len>=6) )
			?printf("your password is strong !! ")
			:printf("your password is not strong !! ");

}
