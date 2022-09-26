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
	int i, j, p, 1 = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + 1;
		1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", 1, r;
}
