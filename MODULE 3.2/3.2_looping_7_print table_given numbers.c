//WAP to print table up to given numbers 

#include<stdio.h>
main()
{
	int T, i;
	
		printf("\n\n\t Enter a number to wap a table :");
		scanf("%d",&T);
		
		i = 1;
		while(i <= 10)
		{
			printf("\n\n\t %d * %d = %d",T, i, T * i);
			
				i++;
		} 
}
