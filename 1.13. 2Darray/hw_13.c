#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"hw_13.h"

void hw_13_01(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	float matrix2[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 2:\n");
	addInMatrixFloat(*matrix2, ARR_ROWS, ARR_COLS);

	float newMatrix[ARR_ROWS][ARR_COLS];
	sumOfTwoMatrix(*matrix1, *matrix2, *newMatrix, ARR_ROWS, ARR_COLS);

	printf("\nPrint matrix 1:\n");
	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	printf("\nPrint matrix 2:\n");
	printMatrixFloat(*matrix2, ARR_ROWS, ARR_COLS);

	printf("\nPrint sum of matrix 1 and matrix 2 :\n");
	printMatrixFloat(*newMatrix, ARR_ROWS, ARR_COLS);
}
void hw_13_02(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	float matrix2[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 2:\n");
	addInMatrixFloat(*matrix2, ARR_ROWS, ARR_COLS);

	printf("\nPrint matrix 1:\n");
	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	printf("\nPrint matrix 2:\n");
	printMatrixFloat(*matrix2, ARR_ROWS, ARR_COLS);

	isTheSameMatrix(*matrix1, *matrix2, ARR_ROWS, ARR_COLS);
}
void hw_13_03(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	printf("\nPrint matrix 1:\n");
	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	if (isIdentityMatrix(*matrix1, ARR_ROWS, ARR_COLS) == 1)
	{
		printf("\nThe matrix are identity!");
	}
	else
	{
		printf("\nThe matrix are not identity!");
	}
}
void hw_13_04(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	swapRowsMatrix(*matrix1, ARR_ROWS, ARR_COLS, 2, 1);
	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);
}
void hw_13_05(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	swapColsMatrix(*matrix1, ARR_ROWS, ARR_COLS, 0, 2);
	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);
}
void hw_13_06(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	prodNumberMatrix(*matrix1, ARR_ROWS, ARR_COLS, 2.1);

	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);
}
void hw_13_07(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	float arr[ARR_COLS] = { 1.2, 2.2, 3.2 };

	prodVectorMatrix(*matrix1, arr, ARR_ROWS, ARR_COLS);

	printMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);
}
void hw_13_08(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	float matrix2[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix2, ARR_ROWS, ARR_COLS);

	float resMatrix[ARR_ROWS][ARR_COLS];
	prodTwoMatrix(*matrix1, *matrix2, resMatrix, ARR_ROWS, ARR_COLS);

	printMatrixFloat(*resMatrix, ARR_ROWS, ARR_COLS);
}
void hw_13_10(void)
{
	float matrix1[ARR_ROWS][ARR_COLS];
	printf("Enter elements in matrix 1:\n");
	addInMatrixFloat(*matrix1, ARR_ROWS, ARR_COLS);

	printSumColsRows(*matrix1, ARR_ROWS, ARR_COLS);
}
void hw_13_11(void)
{
	int matrix[ARR_ROWS][ARR_COLS2] = { {0, 1, 0, 1, 1} ,
		{1, 1, 1, 1, 0},
		{0, 1, 1, 1, 1},
		{0, 0, 1, 1, 1} };

	int arr[ARR_ROWS] = { 1,1,1,1 };
	printf("%d", findArrayInMatrix(*matrix, ARR_ROWS, ARR_COLS2, arr));

}
void hw_13_12(void)
{
	int matrix[4][4] = { {1, 1, 1, 1} ,
		{1, 1, 0, 1},
		{1, 1, 1, 1},
		{1, 1, 1, 1} };

	int mainMatrix[6][5] = { {0, 1, 0, 1, 1} ,
		{1, 1, 1, 1, 0},
		{1, 1, 0, 1, 0},
		{1, 1, 1, 1, 0},
		{1, 1, 1, 1, 1},
		{0, 1, 0 ,1, 0} };

	printf("%d", findSubMatrix(*mainMatrix, ARR_ROWS, ARR_COLS, *matrix, 6, 5));
}
void addInMatrixFloat(float* matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		printf("Enter a element in %d row: ", i);
		for (int j = 0; j < cols; j++)
		{
			scanf(" %f", &(matrix[i * cols + j]));
		}
	}
}
void printMatrixFloat(const float* matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			printf("%f ", matrix[i * cols + j]);
		}
		printf("\n");
	}
}
void sumOfTwoMatrix(const float* matrix1, const float* matrix2, float* newMatrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			newMatrix[i * cols + j] = matrix1[i * cols + j] + matrix2[i * cols + j];
		}
	}
}
void isTheSameMatrix(const float* matrix1, const float* matrix2, int rows, int cols)
{
	int flag = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (matrix1[i * cols + j] != matrix2[i * cols + j])
			{
				flag = 0;
				break;
			}
		}
	}

	if (flag == 1)
	{
		printf("The matrix are same!\n");
	}
	else
	{
		printf("The matrix are not same!\n");
	}
}
int isIdentityMatrix(const float* matrix, int rows, int cols)
{
	int flag = 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j && matrix[i * cols + j] == 1)
			{
				flag = 1;
			}
			else if (i != j && matrix[i * cols + j] == 0)
			{
				flag = 1;
			}
			else
			{
				flag = 0;
				break;
			}
		}
	}
	return flag;
}

void swapRowsMatrix(float* matrix, int rows, int cols, int index1, int index2)
{
	if (index1 > index2)
	{
		int temp = index1;
		index1 = index2;
		index2 = temp;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == index1)
			{
				int temp = matrix[i * cols + j];
				matrix[i * cols + j] = matrix[i * cols + j];
				matrix[i * cols + j] = temp;
			}
		}
	}
}

void swapColsMatrix(float* matrix, int rows, int cols, int index1, int index2)
{
	if (index1 > index2)
	{
		int temp = index1;
		index1 = index2;
		index2 = temp;
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (j == index1)
			{
				int temp = matrix[i * cols + j];
				matrix[i * cols + j] = matrix[i * cols + j];
				matrix[i * cols + j] = temp;
			}
		}
	}

}

void prodNumberMatrix(float* matrix, int rows, int cols, float num)
{
	float temp = 0.0f;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i * cols + j] *= num;
		}
	}
}

void prodVectorMatrix(float* matrix, int rows, int cols, const float* arr)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix[i * cols + j] *= arr[j];
		}
	}
}

void prodTwoMatrix(float* matrix1, float* matrix2, float* resMatrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			resMatrix[i * cols + j] = 0;
			for (int l = 0; l < ARR_ROWS; l++)
			{
				resMatrix[i * cols + j] += matrix1[i * cols + l] * matrix2[l * cols + j];
			}
		}
	}
}
void countUniqueCols(float* matrix, int rows, int cols)
{

}
void printSumColsRows(float* matrix, int rows, int cols)
{
	float sumRow = 0.0f;
	float sumCol = 0.0f;
	for (int i = 0; i < ARR_ROWS; i++)
	{
		for (int j = 0; j < ARR_COLS; j++)
		{
			sumRow += matrix[i * cols + j];
			sumCol += matrix[i * cols + j];
		}
		printf("the sum of %d row is %f\n", i, sumRow);
		sumRow = 0.0f;
		printf("the sum of %d col is %f\n", i, sumCol);
		sumCol = 0.0f;

	}
}
int findArrayInMatrix(int* matrix, int rows, int cols, int* arr)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			int posArr = 0;
			if (matrix[i * cols + j] == arr[posArr])
			{
				while (matrix[i * cols + j] == arr[posArr] && j < ARR_COLS)
				{
					posArr++;
					j++;
				}
			}
			if (posArr == ARR_ROWS)
			{
				return 1;
			}
		}
	}
	return 0;
}
int findSubMatrix(const int* mainMatrix, int rowsMain, int colsMain, const int* matrix, int rows, int cols)
{
	int countRows = 0;
	for (int i = 0; i < rowsMain; i++)
	{
		for (int j = 0; j < colsMain; j++)
		{
			if (findArrayInMatrix(mainMatrix, matrix[i], ARR_ROWS, ARR_COLS) == 1)
			{
				countRows++;
				i++;
			}
			else
			{
				break;
			}

		}
	}
	if (countRows == 4)
	{
		return 1;
	}
	return 0;
}