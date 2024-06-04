#include<stdio.h>
#include<conio.h>

main() 
{
    int n,i,sum = 0;
    clrscr();
    
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i=1 ; i<=n ; i++) 
	{
       sum += i; 
    }

   
    printf("The sum of %d is: %d\n",n,sum);

    getch();
}

