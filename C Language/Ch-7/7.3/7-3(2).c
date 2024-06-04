#include<stdio.h>

main()
{
	int n;

	
	printf("press 1 for English\n");
	printf("press 2 for Hindi\n");
	printf("press 3 for Gujarati\n");
	
	printf("Enter your choice : ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			printf("press 1 for Internet Richarge\n");
			printf("press 2 for Top-up Richarge\n");
			printf("press 3 for Special Richarge\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("You have Internet Recharge Successfully\n");
					break;
				case 2:
					printf("You have Top-up Recharge Successfully\n");
					break;
				case 3:
					printf("You have Special Recharge Successfully\n");
					break;
				default:
					printf("Invalid Choice");
			}
			break;
			
		case 2:
			printf("Internet Richarge ke liye 1 dabaiye\n");
			printf("Top-up Richarge ke liye 2 dabaiye\n");
			printf("Special Richarge ke liye 3 dabaiye\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("Apne Safaltapurvak Internet Recharge kar liya he\n");
					break;
				case 2:
					printf("Apne Safaltapurvak Top-up Recharge kar liya he\\n");
					break;
				case 3:
					printf("Apne Safaltapurvak Special Recharge kar liya he\n");
					break;
				default:
					printf("Invalid choice");
			}
			break;
			
		case 3:
			printf("Internet Recharge mate 1 dabavo\n");
			printf("Top-up Recharge mate 2 dabavo\n");
			printf("Special Recharge mate 3 dabavo\n");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					printf("Tame Safaltapurvak Internet Recharge karyu chhe\n");
					break;
				case 2:
					printf("Tame Safaltapurvak Internet Recharge karyu chhe\n");
					break;
				case 3:
					printf("Tame Safaltapurvak Internet Recharge karyu chhe\n");
					break;
				default :
					printf("Invalid Input");
			}
			break;
			
		default:
			printf("Invalid Input");
	}
}
