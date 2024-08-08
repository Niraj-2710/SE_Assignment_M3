//summation of first and last Digit.

#include<stdio.h>
main()
{
	 int Num, Org, Firstdigit, Lastdigit,Sum;
	 
	 	printf("\n\n\t Enter Number :");
	 	scanf("%d",&Num);
	 	
	 		Org = Num;
	 		
	 			Lastdigit = Num % 10;
	 			
	 				Firstdigit = Org;
	 			
	 				while (Firstdigit >= 10)
	 				{
	 					Firstdigit /= 10;
					}
					
				
					
						Sum	= Firstdigit + Lastdigit;
						
							printf("\n\n\t Sum of First and Last digit %d is: %d\n", Org, Sum);
							
						}
						
