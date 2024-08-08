// swap two numbers without using third variable

#include<stdio.h>
main()
{
	int A, B;
	printf("\n\n\t Enter Value A :");
	scanf("%d",&A);
	printf("\n\n\t Enter Value B :");
	scanf("%d",&B);
	
		A = A + B;
		B = A - B;
		A = A - B;
		
			printf("\n\n\t After Swapping :\n");
			printf("\n\n\t A = %d\n",A);
			printf("\n\n\t B = %d\n",B);
}
