// WAP Find out length of string without using inbuilt function

#include<stdio.h>
int StringLength(char Str[]);

main() 
{
    char Str[100];
    
    printf("\n\n\t Enter string : ");
    fgets(Str, sizeof(Str), stdin);
    
    int length=stringLength(Str);

    printf("\n\n\t The length of string : %d \n", length);
}

stringLength(char Str[])  
{
    int length=0;
    
    while (Str [length] !='\0')   
	{
        length++;
    }
    
    if (Str [length-1] =='\n')
	{
        length--;
    }
}
