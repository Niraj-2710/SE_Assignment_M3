//WAP to show 1. Monday to Sunday using switch case

#include<stdio.h>
main()
{
	int D;
	
		for (D = 1; D <= 7; D++)
		{
		switch (D)
		{
		case 1:
				printf("\n\n\t Monday\n");
				break;
		case 2:
				printf("\n\n\t Tuesday\n");
				break;
		case 3:
				printf("\n\n\t Wednesday\n");
				break;
		case 4:
				printf("\n\n\t Thursday\n");
				break;	
		case 5:
				printf("\n\n\t Friday\n");
				break;
		case 6:
				printf("\n\n\t Saturday\n");
				break;
		case 7:
				printf("\n\n\t Sunday\n");
				break;

		}
	}
}
