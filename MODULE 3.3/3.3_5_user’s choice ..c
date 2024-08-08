/*WAP to take two Array input from user and sort them in ascending or 
descending order as per user’s choice */

#include<stdio.h>
int sortArray(int arr[], int S, int O);
int printArray(int arr[], int S);
int i, j;

main() 
{
    int SIZE1, SIZE2, TEMP, O;
    
    printf("\n\n\t Enter the number of first array : ");
    scanf("%d", &SIZE1);
    printf("\n\n\t Enter the number of second array : ");
    scanf("%d", &SIZE2);
    
    int arr1[SIZE1], arr2[SIZE2];
    
    printf("\n\n\t Enter %d elements for the first array : ", SIZE1);
    for (i=0;i<SIZE1;i++)
	{
        scanf("%d", &arr1[i]);
    }
    
    printf("\n\n\t Enter %d elements for the second array : ", SIZE2);
    for (i=0;i<SIZE2;i++)
	{
        scanf("%d", &arr2[i]);
    }
    
    printf("\n--------------------------------------------------");
    printf("\n\n\t -> Enter 1 for ascending order or 2 for descending order : ");
    scanf("%d",&O);
    
    sortArray(arr1, SIZE1, O);    
    sortArray(arr2, SIZE2, O);
    
    printf("\n-------------------------------------------------");
    printf("\n\n\t --> First array after sorting : ");     
    printArray(arr1, SIZE1);
    
    printf("\n-------------------------------------------------");
    printf("\n\n\t --> Second array after sorting : ");
    printArray(arr2, SIZE2);
}

sortArray(int arr[], int S, int O) 
{
	int TEMP;
    for (i=0;i< S -1;i++)
	{
        for (j=0;j< S -i-1;j++)
		{
            if ((O ==1&&arr[j]>arr[j+1])||(O ==2&&arr[j]<arr[j+1]))
			{
                TEMP=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=TEMP;
            }
        }
    }
}

printArray(int arr[], int S) 
{
    for (i=0;i< S ;i++)
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}
