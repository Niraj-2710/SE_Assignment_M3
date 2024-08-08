//How many odd numbers are there

#include <stdio.h>
main() 
{
    int i, A, B, C = 0;

    printf("\n\n\t Enter the lower bound: ");
    scanf("%d", &A);

    printf("\n\n\t Enter the upper bound : ");
    scanf("%d", &B);

    printf("\n\n\t Odd numbers : ");
    for (i = A; i <= B; i++) 
	{
        if (i % 2 == 0) 
		{
            printf("%d ", i);
            C++;
        }
    }

    printf("\n\n\t There are %d even numbers between %d and %d.\n", A, B, C);
}
