/* Pattern_1
 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1
 */

#include <stdio.h>
main()
{
    int P, A ;
    for(P = 1; P <= 5; P ++) 
	{ 
	
		for(A = 1; A <= P; A ++)
		{
			if (A % 2 == 1)
			{
			printf(" 1");
			}
			else 
			{
				printf(" 0");
			}
		}
				printf("\n");
    }
}
