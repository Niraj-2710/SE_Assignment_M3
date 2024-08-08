#include <stdio.h>

int find_max(int arr[], int size)
 {
    int max = arr[0];
    for (int I = 1; I < size; I++) 
	{
        if (arr[I] > max) 
		{
            max = arr[I];
        }
    }
    return max;
}

int main()
 {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = find_max(arr, size);

    printf("Maximum number in the array is: %d\n", max);

}
