#include <stdio.h>
int A[3][3]; 
int B[3][3]; 
int plus[3][3];
int minus[3][3];
int multiply[3][3];
void printf_matrix(int mat[3][3])
{
	int i, j; 
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j > 0) 
            printf_s(" | "); 
			printf_s("%d", mat[i][j]);
		}
		printf_s("\n");
	}
}
int main()
{
	int i, j, k; 
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 3; j++) 
		{
			scanf_s("%d", &A[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &B[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			plus[i][j] = A[i][j] + B[i][j];
			minus[i][j] = A[i][j] - B[i][j];
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int sum = 0;
			for (k = 0; k < 3; k++)
				sum = sum + (A[i][k] * B[k][j]);
			    multiply[i][j] = sum;
		}
	}
	printf_s("Matrix sum:\n"); printf_matrix(plus); printf("\n");
	printf_s("Matrix difference:\n"); printf_matrix(minus); printf("\n");
	printf_s("Matrix multiply:\n"); printf_matrix(multiply);
return 0;
}
