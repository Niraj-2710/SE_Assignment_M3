// Write a program to find out the max number from given array using function

#include <stdio.h>

int find_max(int A[], int S)
 {
    int max = A[0];
    for (int I = 1; I < S; I++) 
	{
        if (A[I] > max) 
		{
            max = A[I];
        }
    }
    return max;
}

int main()
 {
    int A[] = {100, 400, 250, 300, 600, 895, 345};
    int S = sizeof(A) / sizeof(A[0]);

    int max = find_max(A, S);

    printf("\n\n\t Maximum number in the array is : %d\n", max);

}
