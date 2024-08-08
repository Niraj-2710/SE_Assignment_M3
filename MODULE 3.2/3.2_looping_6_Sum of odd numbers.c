// Sum of odd numbers

#include <stdio.h>
main() 
{
    int A, B, S = 0, i;

    printf("\n\n\t Enter the lower bound : ");
    scanf("%d", &A);

    printf("\n\n\t Enter the upper bound : ");
    scanf("%d", &B);

    printf("\n\n\t Odd numbers : ");
    for (i = A; i <= B; i++) 
	{
        if (i % 2 == 0) 
		{
            printf("%d ", i);
            S += i;
        }
    }

    printf("\n\n\t Sum of odd numbers : %d\n", S);

}
