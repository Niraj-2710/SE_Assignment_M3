// WAP to reverse a string and check that the string is palindrome or not

#include <stdio.h>

int main() {
    char string1[20];
    int i, length;
    int flag = 0;

    printf("\n\n\t Enter a string: ");
    scanf("%s", string1);

   
    length = strlen(string1);

    for (i = 0; i < length / 2; i++) 
	{
        if (string1[i] != string1[length - i - 1]) 
		{
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("\n\n\t %s is not a palindrome\n", string1);
    } else {
        printf("\n\n\t %s is a palindrome\n", string1);
    }
}
