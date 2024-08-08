/* WAP to find factorial using recursion

like 5To1	5*4*3*2*1* = 120

*/
int factorial(int);

#include <stdio.h>
main()
{
	int num, f;
	
	printf("\n\n\t Enter a number to print factorial : ");
	scanf("%d",&num);
	
	f=factorial(num);
	printf("\n\n\n\t --> Factorial : %d", f);
}

factorial(int n)
{
	if(n==0)
		return 1;
	
	else
		return n*(factorial(n-1));
	
}



