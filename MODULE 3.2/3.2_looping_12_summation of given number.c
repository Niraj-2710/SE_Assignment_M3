//summation of given number 

#include<stdio.h>
main()
{
	int N, V, SUM=0;
	
		printf("\n\n\t Enter range : ");
		scanf("%d",&N);
		
			while (N > 0)
			{
				V = N % 10;
				SUM = SUM + V;
				N = N / 10;
			}
		
			
		printf("\n\n\t Sum of the given numbers : %d\n", SUM);
}
