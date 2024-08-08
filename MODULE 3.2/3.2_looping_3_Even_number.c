//How many Even numbers are there

#include <stdio.h>
main() 
	{
    int i, S, E, C = 0;

    printf("\n\n\t Enter the start of the range: ");
    scanf("%d", &S);

    printf("\n\n\t Enter the end of the range: ");
    scanf("%d", &E);

    for (i = S; i <= E; i++)
	{
        if (i % 2 == 0) 
		{
            C++;
        }
    }

    printf("\n\n\t There are %d even numbers between %d and %d.\n", C, S, E);

	}
