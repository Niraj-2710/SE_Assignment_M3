//WAP to show 2.Vowel or Consonant using switch case 

#include<stdio.h>
main()
{
	char A;
	
	printf("\n\n\t Enter a character to : ");
	scanf("%A",&A);
	
	if(A=='a' || A=='A')
		printf("\n\n\t It is a vowel.");
	else if(A=='e' || A=='E')
		printf("\n\n\t It is a vowel.");
	else if(A=='i' || A=='I')
		printf("\n\n\t It is a vowel.");
	else if(A=='o' || A=='O')
		printf("\n\n\t It is a vowel.");
	else if(A=='u' || A=='U')
		printf("\n\n\t It is a vowel.");
	else
		printf("\n\n\t It is a consonant.");
}
