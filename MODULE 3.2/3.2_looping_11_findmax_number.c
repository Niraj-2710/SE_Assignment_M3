//find out the max from given number

#include<stdio.h>
main()
{
	int N, MAX, NUM;
	
		printf("\n\n\t Enter number of elements : ");
		scanf("%d",&N);
		
			printf("\n\n\t Enter number : ");
			scanf("%d",&MAX);
			
				  int i=2; i<=N; i++;
				
				{
					printf("\n\n\t Enter number  : ",i);
					scanf("%d",&MAX);
					
						if (NUM > MAX)
						{
							MAX = NUM;
						}
				}
				
					printf("\n\n\t Maximun numbers is : %d\n",MAX);
}
