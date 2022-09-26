#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sum of 2 diagonals of a square
* @a: poiinter to start of matrix
* @size: number of columns of matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, j, dg1 = 0, dg2 = 0, step1, step2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		dg1 = dg1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		dg2 = dg2 + *(a + step2);
	}
	printf("%d, %d\n", dg1, dg2);
}
