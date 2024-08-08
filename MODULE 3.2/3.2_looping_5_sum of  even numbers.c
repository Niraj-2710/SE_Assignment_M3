//Sum of even numbers

#include<stdio.h>
main()
{
	int A, B, i;
	printf("\n\n\t Enter the limit :");
	scanf("%d",&A);
	
	for (i = 2; i <= A; i += 2)
	{
		B += i;
	}
	
		printf("\n\n\t The sum of even numbers from 1 to %d is %d.\n",A, B);
	
}
