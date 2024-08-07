// Simple calculator

#include <stdio.h>
main() 
{
    int num1, num2, A;

    printf("\n\n\t----------Simple Calculator----------\n");
    printf("\n\n\t 1. Addition\n");
    printf("\n\n\t 2. Subtraction\n");
    printf("\n\n\t 3. Multiplication\n");
    printf("\n\n\t 4. Division\n");
    printf("\n\n\t 5. Modulo\n");
    printf("\n\n\tEnter your choice (1-5): ");
    scanf("%d", &A);
    printf("\n\n\t-----------------------------------");
    

    printf("\n\n\tEnter Number : ");
    scanf("%d", &num1);
    
    	printf("\n\n\tEnter Secound number :");
    	scanf("%d",&num2);
    	
    		   if(A==1)
					printf("\n\n\tAddition = %d",num1 + num2);
				else if(A==2)
					printf("\n\n\tSubtraction = %d",num1 - num2);
				else if(A==3)
					printf("\n\n\tMultiplication = %d",num1 * num2);
				else if(A==4)
					printf("\n\n\tDivision = %d",num1 / num2);
				else if(A==5!=0)
					printf("\n\n\tmodulo = %d",num1 % num2);
				else
					printf("\n\n\tInvalid choice.... Try again!!!");
}


