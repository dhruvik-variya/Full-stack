#include<stdio.h>

main ()
{
	
	char email[20];
	char pass[20];
	int i;
	int a = 0; 
	int f = 0;
	int size = 0;
	int s = 0;
	int j = 0 ;
	printf("Enter your Email : ");
	scanf("%s", &email);
	printf("Enter your password : ");
	scanf("%s", &pass);
	
	
	for(i=0 ;email[i] != NULL; i++) 
	{
		if(email[i] == '@' )
			a++;
		if(email [i] == '.')
			f++;
			
	}
	
	if((a==1) && (f==1)) 
	{
		
		a=0;
		f=0;
		
		for(i=0 ;pass[i] != NULL; i++)
			size++;
		
		if(size >= 8) 
		{
		
			for(i = 0; i < size; i++) 
			{
			
				if(pass[i] >= 'A' || pass[i]<='Z')
					a=1;
				
				else if(pass[i] >= 'A' || pass[i]<='Z')
					s=1;
					
				else if(pass[i] >= '0' || pass[i]<='a')
					f=1;
					
				else
					j=1;
			}
			
			(a==1 && s==1 && f==1)
				? printf("LOGIN SUCCESSFULLY  !!")
				: printf("PASSWORD IS NOT STRONG !!");
		
		} else 
			printf("\n\n PASSWORD NOT STRONG !!");
		
	} else
	printf("NOT VALID EMAIL");
		
	
}
