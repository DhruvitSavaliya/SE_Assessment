/* Create a Food billing system
 
Make sure each business logic is denoted with appropriate comments and 
make your code interactive and represent clean and clear output on your 
console screen.
 
Adhere to the coding principles  

Firstly, display the food items available  

Then after the user can choose any of the item displayed 

Also take the quantity of selected food item by the customer, then ask the user that 
he/she wanna select more?  

If yes then again display the food items available and take an order from the 
customer. Here, you have to consider the total bill as the price of food items 
previously selected plus the price of new items added should display as a whole bill. 

If no then display the final bill on the screen */

#include<stdio.h>
main()
{
	int i,choose,quantity,price,amount,totalprice=0;
	char ch;
	
	do
	{
		printf("\n -------------------- Menu -------------------------");
		printf("\n 1. Pizza       Price = 180Rs/pcs");
		printf("\n 2. Burger      price = 100Rs/pcs");
		printf("\n 3. Dosa        price = 120Rs/pcs");
		printf("\n 4. Idli        price = 50Rs/pcs");
		
		printf("\n Enter Your Choice : ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:	printf("\n\n You have selected Pizza \n");
					printf("\n\n Enter the quantity :");
					scanf("%d",&quantity);
					price = 180;
					amount = quantity * price;
					printf("\n Total Amount = %d ",amount);
					break;
					
			case 2: printf("\n\n You have selected Burger. \n");
					printf("\n\n Enter the quantity :");
					scanf("%d",&quantity);
					price = 100;
					amount = quantity * price;
					printf("\n Total Amount = %d ",amount);
					break;
					
			case 3: printf("\n\n You have selected Dosa. \n");
					printf("\n\n Enter the quantity :");
					scanf("%d",&quantity);
					price = 120;
					amount = quantity * price;
					printf("\n Total Amount = %d ",amount);
					break;
					
			case 4: printf("\n\n You have selected Idli. \n");
					printf("\n\n Enter the quantity :");
					scanf("%d",&quantity);
					price = 50;
					amount = quantity * price;
					printf("\n Total Amount = %d ",amount);
					break;
					
			default: printf("\n Invalid choice!");
                     
		}
		
		totalprice += amount;
		printf("\n\n Total Price pay : %d ",totalprice);
		
		printf("\n\n Do You want place more orders ? y & n : ");
		scanf(" %c",&ch);
		
	}while(ch=='y' || ch=='Y');
}
