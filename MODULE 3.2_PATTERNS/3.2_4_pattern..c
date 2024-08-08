/* Pattern_4
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
*/


#include <stdio.h>
main()
{
	int A = 5, B = 1, C, D;
	
		for (C = 0; C < A; C ++)
		{
			for (D = 0; D <= C; D ++)
			{
				printf("%d ",B ++);
			}
				printf("\n");
		}
}
