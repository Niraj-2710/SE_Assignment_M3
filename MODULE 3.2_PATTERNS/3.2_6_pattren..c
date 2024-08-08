/* Pattern_6
*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
main() 
{
	int A, B;
	
		for (A = 1; A <= 6; A ++)
		{
			for (B = 1; B <= A; B ++)
			{
				printf("* ");
			}
			printf("\n");
		}
		
			for (A = 5; A >= 1; A--)
			{
				for (B = 1; B <= A; B ++)
				{
					printf("* ");
				}
					printf("\n");
			}
}
