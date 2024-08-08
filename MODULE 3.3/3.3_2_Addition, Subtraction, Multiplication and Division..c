/* WAP of Addition, Subtraction, Multiplication and Division using Switch 
case.(Must Be Menu Driven)*/

#include<stdio.h>
main()
{
	int choice;
	float Number1, Number2, Number3;
	
	printf("\n\n\t Addition, Subtraction, Multiplication and Division\n");
	printf("\n\n\t 1. Addition\n");
	printf("\n\n\t 2. Subtraction\n");
	printf("\n\n\t 3. Multipication\n");
	printf("\n\n\t 4. Division\n");
	printf("\n\n\t ---------------------------------------");
	
		while (1)
		{
			printf("\n\n\t Enter your choice (1-5) :");
			scanf("%d",&choice);
					
			if (choice == 5)
			{
				printf("\n\n\t Exiting calculator!\n");
				break;
			}
				
					
			printf("\n\n\t Enter A Number :");
			scanf("%f",&Number1);
					
			printf("\n\n\t Enter A Number 2 :");
			scanf("%f",&Number2);

			switch (choice)
			{
				case 1:
					Number3 = Number1 + Number2;
					printf("\n\n\t %.2f + %.2f = %.2f\n",Number1, Number2, Number3);
					break;
								
				case 2:
					Number3 = Number1 - Number2;
					printf("\n\n\t %.2f - %.2f = %.2f\n",Number1, Number2, Number3);
					break;
								
				case 3:
					Number3 = Number1 * Number2;
					printf("\n\n\t %.2f * %.2f = %.2f\n",Number1, Number2, Number3);
					break;
								
				case 4:
					if (Number2 == 0)
					{
						printf("\n\n\t Error: Division by zero is not allowed,\n");
					}
					else
					{
						Number3 = Number1 / Number2;
						printf("\n\n\t %.2f / .%2f = %.2f\n",Number1, Number2, Number3);
					}
					break;
								
					default:
						printf("\n\n\t Invalid Choice.Please Try Again.\n");
									
						
					}
				break;			
	}
}
