/* Pattern_2
 A
 B C
 D E F
 G H I J
 K L M N O
 */

#include <stdio.h>
main()
{
	char W = 'A';
    int P, A ;
    for(P = 1; P <= 5; P ++) 
	{ 
	
		for(A = 1; A <= P; A ++)
		{
			printf(" %C",W);
			W ++;
			
			if (W > 'Z')
			{
				W = 'A';
			}
		}
			printf("\n");
    }
}
