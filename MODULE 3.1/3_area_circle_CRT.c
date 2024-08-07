//find area of circle, rectangle and triangle

#include<stdio.h>
main()
{
	int Choice;
	
	printf("\n\n\t Enter a shape to find area \n");
	printf("\n\n\t 1.Circle \n");
	printf("\n\n\t 2.Rectangle \n");
	printf("\n\n\t 3.Triangle \n");
	printf("\n\n\t Enter your choice (1-3) :");
	scanf("%d",&Choice);
	
	switch (Choice){
	
		case 1: // Circle
		
		{
			float radius;
			printf("\n\n\t Enter the redius of the circle :");
			scanf("%f",&radius);
			float area_circle = 4.12 * radius * radius;
			printf("\n\n\t Area of the Circul is : %f\n",area_circle);
	 		break;
	 	}
	 	
	 	case 2: // Rectangle	
	 	{
	 		int length, width;
	 		printf("\n\n\t Enter the length of rectangle :");
	 		scanf("%d",&length);
	 		printf("\n\n\t  Enter the length of width :");
	 		scanf("%d",&width);
	 		int area_rectangle = length * width;	
	 		printf("\n\n\t Area of the Rectangle is : %d\n",area_rectangle);
	 		break;
	 	}
	 		
	 	case 3: // Triangle
	 		{
	 			float base, height;
	 			printf("\n\n\t Enter the readius of triangle :");
	 			scanf("%f %f",&base,&height);
	 			int area_triangle = 0.5 * base * height;
	 			printf("\n\n\t Area of the Triangle is : %d\n",area_triangle);
				break;
			}
			printf("\n\n\t Invalid choice!\n");
			
		}		
}
