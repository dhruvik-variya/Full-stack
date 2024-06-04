#include<stdio.h>

struct bill{
	     int qty, pprice,sum;
	     int productno;
	     char productname[20];
};
	 
main()
{
	FILE *fp;
	
	fp=fopen("bill.txt","w");
	
    int n,i,total=0,ans;
	printf("Enter num of products : ");
	scanf("%d",&n);
     struct bill b[n];
     char name[20];
     char contact[20];
     printf("\n\nEnter your name : ");
     scanf("%s",&name);
     
	 printf("Enter your number : ");
     scanf("%s",&contact);

	for(i=0; i<n; i++){
		
	 printf("\n\nEnter The Product Number : ");
	 scanf("%d",&b[i].productno);
	 fflush(stdin);
	 printf("Enter The Product Name : ");
	 scanf("%s",&b[i].productname);
	  printf("Enter The Number Of Quantity : ");
	 scanf("%d",&b[i].qty);
	 printf("Enter price : ");
	 scanf("%d",&b[i].pprice);
		
	}
	 
	for(i=0; i<n; i++)
	{
		b[i].sum = b[i].pprice * b[i].qty;
		printf("SUM : %d\n",b[i].sum);
		total  += b[i].sum;
		printf("TOTAL : %d\n",total);
	}
	
	
	ans = total * 18 /100;
	total += ans;
	
	fprintf(fp,"-----BILL-----\n");
	fprintf(fp,"NAME :\t\n  %s",name);
	fprintf(fp,"CONTACT :\t\n  %s",contact);
	fprintf(fp,"==============================================\n");
	fprintf(fp,"Number of Quantity :\tProduct Number :\tPrice : \tProduct name :\t\n");
	fprintf(fp,"==============================================\n");
	for(i=0; i<n; i++){
		fprintf(fp,"%d\t %d\t %d\t %s\t ",b[i].qty,b[i].productno,b[i].pprice,b[i].productname);
	}
	fprintf(fp,"\n\n\t\t\t TOTAL\t: %d",total);
	printf("Program is completed");
}


