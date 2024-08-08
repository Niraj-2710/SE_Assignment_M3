// WAP to find reverse of string using recursion

#include <stdio.h>

reverse (char *S)
{
	if (*S)
	{
		reverse(S + 1);
		printf("%c", *S);
	}
}
main()
{
	char A[] = "\n\n\t noisrucer gnisu gnirts fo esrever dnif ot PAW";
	reverse(A);
}
