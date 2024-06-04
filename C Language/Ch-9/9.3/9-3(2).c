#include<stdio.h>
#include<conio.h>

main() 
{
    int i=1,n,fac = 1;
    clrscr();
    
    printf("Enter n : ");
    scanf("%d", &n);

    for (i=1 ; i<=n ; i++) 
	{
       fac = fac* i;
    }

   
    printf("The factorial of %d is: %d\n",n,fac);

    getch();
}

