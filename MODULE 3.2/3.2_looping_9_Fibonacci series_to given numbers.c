//print Fibonacci series up to given numbers

#include<stdio.h>
main()
{
	int a, A = 0, B = 1, C, N;
	
		printf("\n\n\t Enter a number to fidonancci :");
		scanf("%d",&N);
		
			printf("\n\n\t %d %d",A, B);
			
			a=1;
			while(a<=N)
			{
				C=A+B;
				printf(" %d",C);
				A=B;
				B=C;
				a++;
			}
}
