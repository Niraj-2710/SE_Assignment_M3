//WAP to take 10 no. Input from user and find out … 

#include<stdio.h>
main()
{
	int Z, X = 0, I;
	float Average;
	
	for (I = 0;I < 10; I++)
	{
		printf("\n\n\t enter number %d :",I + 1);
		scanf("%d",Z);
		
		X += Z;
	}
	
		Average = X / 10;
		
		printf("\n\n\t Sum of the numbers : %d\n",X);
		printf("\n\n\t AVerage of the Numbers :%.2f\n",Average);
}
