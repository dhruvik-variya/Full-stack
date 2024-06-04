#include<stdio.h>
#include<conio.h>

main()
{
	char n;
	clrscr();

	printf("Press A for Sunday\n");
	printf("Press B for Monday\n");
	printf("Press C for Tuesday\n");
	printf("Press D for Wednesday\n");
	printf("Press E for Thursday\n");
	printf("Press F for Friday\n");
	printf("Press G for Saturday\n\n");

	printf("Enter your choice : ");
	scanf("%c",&n);

	switch(n)
	{
		case 'A':
			printf("Sunday");
			break;
			
		case 'B':
			printf("Monday");
			break;
			
		case 'C':
			printf("Tusday");
			break;
			
		case 'D':
			printf("Wednesday");
			break;
			
		case 'E':
			printf("Thursday");
			break;
			
		case 'F':
			printf("Friday");
			break;
			
		case 'G':
			printf("Saturday");
			break;
			
		default:
			printf("Invalid input !!");
	}

	getch();
}
