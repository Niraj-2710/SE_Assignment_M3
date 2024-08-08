//WAP to find number is even or odd using ternary operator 


#include<stdio.h>
main()
{
	int A;
		printf("\n\n\t Enter A Number :");
		scanf("%d",&A);
		
		(A % 2 == 0)?printf("\n\n\t %d Is Even Number.\n",A):printf("\n\n\t %d Is Odd Number,\n",A);
			
}
