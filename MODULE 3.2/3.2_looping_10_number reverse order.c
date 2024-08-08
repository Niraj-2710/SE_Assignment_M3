/*WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 
82746*/

#include<stdio.h>
main()
{
	int B,REM, SUM;
	
		printf ("\n\n\t Enter a number to reverse numbers : ");
		scanf ("%d",&B);
		
		while(B>0)
		{
			REM=B%10;
			SUM = SUM+REM;
			printf("\n \t %d",REM);
			B=B/10;
		}
		
			printf("\n\n\t Sum of given numbers : %d", SUM);
}
