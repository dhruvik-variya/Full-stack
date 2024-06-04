#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	
	int i, len=0;
	
	for(i=0; name[i]!=NULL; i++)
	{
		len++;
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i-1]==' ' || i==0)
		{
			if(name[i]>='a' && name[i]<='z')
			{
					name[i] = name[i] - 32;
			}
			else if(name[i]>='A' && name[i]<='Z')
			{
				name[i] = name[i] + 32;
			}
		}
	}
	
	printf("\n\nname\t : %s\n",name);
}
