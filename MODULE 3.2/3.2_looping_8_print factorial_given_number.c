//print factorial of given number

#include<stdio.h>


main()
{
	int Num, I, Fact=1;
	
	printf("\n\n\t Enter a numer :");
	scanf("%d",&I);
	printf("\n\n");
	Num=1;
	while(Num<=I)
	
	{
		printf("%d *",Num);
		Fact = Fact*Num;
		
		Num++;
	}
	
		printf("\n\n\n\t Factorial of... %d : %d",I,Fact);
}
