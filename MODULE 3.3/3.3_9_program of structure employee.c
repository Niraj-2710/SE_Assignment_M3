/*Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age */

#include <stdio.h>

main() 
{
	int empno;
    char empname[50];
    char address[100];
    int age;
	
    struct Employee ;

    printf("\n\n\t Enter employee number : ");
    scanf("%d", &empno);

    printf("\n\n\t Enter employee name : ");
    scanf("%s", empname);

    printf("\n\n\t Enter employee address : ");
    scanf("%s", address);

    printf("\n\n\t Enter employee age : ");
    scanf("%d", &age);

	printf("--------------------------------");
	
    printf("\n\n\t\ Employee Information :\n");
    printf("\n\n\t Employee Number: %d\n", empno);
    printf("\n\n\t Employee Name: %s\n", empname);
    printf("\n\n\t Employee Address: %s\n", address);
    printf("\n\n\t Employee Age: %d\n", age);
    

}

