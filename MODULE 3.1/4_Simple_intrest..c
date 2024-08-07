//simple interest

#include<stdio.h>
main()
{
	float teacher, rate, time, simple_interest;
	
		printf("\n\n\t Enter teacher amount : ");
		scanf("%f", &teacher);
		
			printf("\n\n\t Enter the rete of intrest (in percentage) : ");
			scanf("%f", &rate);
			
		printf("\n\n\t Enter the time period (in years) : ");
		scanf("%f", &time);
				
			simple_interest = (teacher * rate * time) / 100;
					
		printf("\n\n\t The simple interest is : %f\n", simple_interest);
						
}
