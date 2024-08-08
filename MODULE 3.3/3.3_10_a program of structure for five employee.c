/* Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age */

#include <stdio.h>
main()
{
	typedef struct 
{
    int empno, i;
    char empname[50];
    char address[100];
    int age;
} Employee;

void printEmployee(Employee emp) 
{
    printf("Employee No: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n\n", emp.age);
}

for ( i = 0; i < 5; i++) 
	{
        printf("Enter Employee %d Information:\n", i + 1);
        printf("Enter Employee No: ");
        scanf("%d", &employees[i].empno);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].empname);
        printf("Enter Address: ");
        scanf("%s", employees[i].address);
        printf("Enter Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Information:\n");
    for ( i = 0; i < 5; i++) 
	{
        printf("Employee %d:\n", i + 1);
        printEmployee(employees[i]);
    }

}
