#include<stdio.h>

main()
{
	char name[20];
	
	printf("enter your name : ");
	scanf("%[^\n]",&name);
	
	int i, j, len=0;
	
	for(i=0; name[i]!=NULL; i++)
	{
		len++;
		if(name[i] >= 65 && name[i] <= 90) 
		{
			name[i] += 32;
		}
	}
	
	for(i=0;i<len;i++)
	{
		if(name[i-1]==' ')
		{
			if(name[i]>='a' && name[i]<='z')
			{
					name[i] = name[i] - 32;
			}
		}
	}
	
	for(i=0; i<len; i++) 
	{
		if(name[i] == ' ') 
		{
			for(j=i; j<len; j++) 
			{
				name[j] = name[j+1];
			}
			len--;
		}
	}
	
	printf("\n\nname\t : %s\n",name);
}
