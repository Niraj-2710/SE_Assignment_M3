//Write a program to find out the max number from given array using function 

#include <stdio.h>

int main() 
{
    
    struct Employee 
{
    int empno;
    char name[50];
    float salary;
};

union Data 
{
    int i;
    float f;
    char str[20];
};
    
    struct Employee emp;
    emp.empno = 101;
    strcpy(emp.name, "John Doe");
    emp.salary = 50000.0;

    printf("\n\n\t Employee Number: %d\n", emp.empno);
    printf("\n\n\t Employee Name: %s\n", emp.name);
    printf("\n\n\t Employee Salary: %.2f\n", emp.salary);

    union Data data;
    data.i = 10;
    printf("\n\n\t Integer value: %d\n", data.i);

    data.f = 3.14;
    printf("\n\n\tFloat value: %.2f\n", data.f);

    strcpy(data.str, "Hello");
    printf("\n\n\t String value: %s\n", data.str); 

    
}

