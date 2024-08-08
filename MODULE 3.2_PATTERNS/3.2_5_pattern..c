/* Pattern_5
 A
 A B
 A B C
 A B C D
 A B C D E
*/

#include <stdio.h>
main()
{
	int R = 5, I, P;
	
		for (I = 0; I < R; I ++)
		{
			for (P = 0; P <=I; P++)
			{
				printf("%c ", 'A' + P);
			}
			printf("\n");
		}
}
