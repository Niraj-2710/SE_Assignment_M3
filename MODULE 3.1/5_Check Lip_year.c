//WAP to check if the given year is a leap year or not.

#include <stdio.h>
main()
{
int year;

	printf("\n\n\t Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0) 
	{
        if (year % 100 == 0) 
		{
            if (year % 400 == 0)
               printf("\n\n\t %d is A Leap Year. \n",year);
            else
            	printf("\n\n\t %d is not a Leap Year. \n",year);
        } 
		else
            printf("\n\n\t %d is not a Leap Year. \n",year); 
    }
            else
            printf("%d is a leap year.\n", year);
}
