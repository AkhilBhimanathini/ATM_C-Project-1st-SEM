#include<stdio.h>
void main()
{
 long int amount=10000,withdraw,deposit;
 int option,option1,pin,k;
 char transaction;
 printf("Please select your language:\n");
 printf("1.English\n");
 printf("2.Hindi\n");
 printf("3.Telugu\n");
 scanf("%d", &option);
 switch(option)
 {
  case 1:
  	     while(pin!=1520)
  	     { 
  	     printf("ENTER YOUR PIN NUMBER: ");
  	     scanf("%d", &pin);
  	     if (pin!=1520)
  	     printf("PLEASE ENTER VALID PASSWORD\n");
  	     }
  	     do
		 {
		 printf("*************Welcome to ATM Services*************\n");
		 printf("1. Balance enquiry\n");
		 printf("2. Withdraw cash\n");
		 printf("3. Deposit cash\n");
		 printf("4. Quit\n");
		 printf("*****************?******************\n");
		 printf("Enter your choice:\n");
		 scanf("%d", &option1);
		 switch(option1)
		 {
		  case 1:
		         printf("\n YOU BALANCE AMOUNT IS: %d\n", amount);
		         printf("THANK YOU FOR USING OUR ATM\n");
		  	     break;
		  case 2:
		         printf("\nENTER THE AMOUNT TO WITHDRAW : ");
		         scanf("%d", &withdraw);
		         if (withdraw%100!=0)
		         {
		          printf("\nENTER THE AMOUNT IN MULTIPLES OF 100\n");
		         } 
				 else if (withdraw>amount)
				 {
				 printf("\n INSUFFICIENT BALANCE");
			     }
				 else
				 {
				 amount=amount-withdraw;
				 printf("\n\n YOUR TRANSACTION IS BEING PROCESSED");
			     printf("\n\n PLEASE COLLECT CASH");
			     printf("\n YOUR CURRENT BALANCE IS: %d\n", amount);
			     printf("THANK YOU FOR VISITING OUR ATM\n");
				 }
				 break;
		  case 3:
		  	     printf("ENTER THE AMOUNT TO DEPOSIT\n ");
		  	     scanf("%d", &deposit);
		  	     amount = amount+deposit;
		  	     printf("YOUR CURRENT BALANCE IS: %d\n", amount);
		  	     printf("THANK YOU FOR USING OUR ATM\n");
		  	     break;
		  case 4:
		  	     printf("\nYOUR TRANSACTION HAS BEEN CANCELLED\n");
		  	     break;
		  default:
		  	     printf("\n INVALID CHOICE");
	     }
	      printf("DO YOU WISH TO HAVE ANOTHER TRANSACTION?(y/n): \n");
	      fflush(stdin);
	      scanf("%c", &transaction);
	      if (transaction=='n'||transaction=='N')
	      k = 1;
	      else if (transaction=='y'||transaction=='Y')
	      k = 0;
         }
         while(k!=1);
         printf("THANK YOU FOR VISITING OUR ATM");
 }
}
