// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>

int i, j, k;
int inputMatrix(int matrix[][10], int row, int col);
int printMatrix(int matrix[][10], int row, int col);
int addMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row, int col);
int subtractMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row, int col);
int multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row1, int col1, int row2, int col2);

main() 
{
    int row1, col1, row2, col2;
    
    printf("\n\n\t Enter the number of rows first matrix : ");
    scanf("%d", &row1);
    printf("\n\n\t Enter the number of columns first matrix : ");
    scanf("%d", &col1);
    
    printf("\n\n\t Enter the number of rows for the second matrix : ");
    scanf("%d", &row2);
    printf("\n\n\t Enter the number of columns for the second matrix : ");
    scanf("%d", &col2);
    
    if (row1!=row2||col1!=col2)     
	{
        printf("\n\n\t -----Addition and subtraction require matrices of the same dimensions.-----\n");
    }
    if (col1 != row2)
	{
        printf("\n\n\t Multiplication requires the number of columns in the first matrix to be equal \n to the number of rows in the second matrix.***\n");
    }
    
    int matrix1[10][10], matrix2[10][10], result[10][10];
    
    printf("\n\n\t Enter elements first matrix : \n");
    inputMatrix(matrix1, row1, col1);
    
    printf("\n\n\t Enter elements second matrix : \n");
    inputMatrix(matrix2, row2, col2); 
    
    if (row1==row2&&col1==col2)    
	{
        addMatrices(matrix1, matrix2, result, row1, col1);
        printf("\n\n\t Result of addition : \n");
        printMatrix(result, row1, col1);
    }
    
    if (row1==row2&&col1==col2)    
	{
        subtractMatrices(matrix1, matrix2, result, row1, col1);
        printf("\n\n\t  Result of subtraction:\n");
        printMatrix(result, row1, col1);
    }
    
    if (col1==row2)     
	{
        multiplyMatrices(matrix1, matrix2, result, row1, col1, row2, col2);
        printf("\n\n\t Result of multiplication:\n");
        printMatrix(result, row1, col2);
    }
}

inputMatrix(int matrix[][10], int row, int col) 
{
    for (i=0;i<row;i++)
	{
        for (j=0;j<col;j++)
		{
            scanf("%d", &matrix[i][j]);
        }
    }
}

printMatrix(int matrix[][10], int row, int col)
{
    for (i=0;i<row;i++)
	{
        for (j=0;j<col;j++)
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

addMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row, int col) 
{
    for (i=0;i<row;i++) 
	{
        for (j=0;j<col;j++) 
		{
            result[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
}

subtractMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row, int col) 
{
    for (i=0;i<row;i++)
	{
        for (j=0;j<col;j++) 
		{
            result[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}

multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row1, int col1, int row2, int col2) 
{
    for (i=0;i<row1;i++)
	{
        for (j=0;j<col2;j++)
		{
            result[i][j]=0;
            for (k=0;k<col1;k++)
			{
                result[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}

