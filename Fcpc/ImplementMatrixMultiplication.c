#include<stdio.h>
int main()
{
	int matrixRows, matrix3, matrix3x1, matrix3x2, matrix3x3;
	printf("NOTE THIS IS ONLY FOR SQUARE MATRIX\nEnter number of rows : ");
	scanf("%d" , & matrixRows);
	int matrix[matrixRows][matrixRows];
	printf("Enter matrix elements\n");
	for (int exitLoop1 = 0; exitLoop1 < matrixRows; exitLoop1++)
	{
		for (int exitLoop2 = 0; exitLoop2 < matrixRows; exitLoop2++)
		{
			scanf("%d", & matrix[exitLoop1][exitLoop2]);
		}
		printf("\n");
	}
	switch (matrixRows)
	{
		case 0:
			printf("Rows must be greater than 0");
			break;
		case 1:
			printf("%d", matrix[0][0]);
			break;
		case 2:
			printf("%d", (matrix[0][0]*matrix[1][1]) - (matrix[1][0]*matrix[0][1]));
			break;
		case 3:
			matrix3x1 = (matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[2][1] * matrix[1][2])));
			matrix3x2 = (matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[2][0] * matrix[1][2])));
			matrix3x3 = (matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1])));
			if (matrix3x2 < 0)
			{
				matrix3x2 = matrix3x2 * - 1;
			}
			matrix3 = matrix3x1 + matrix3x2 + matrix3x3;
			printf("%d", matrix3);
			break;
	}
	printf("\n");
}
