#include <stdio.h>
#include "main.h"

/**
* print_array - prints n element of array
* @a: array parameter
* @n: number of elements
*
* Return: nothing
*/

void print_array(int *a, int n)
{
	int arr;

	for (arr = 0; arr < n ; arr++)
	{
		if (arr != n - 1)
			printf("%d, ", a[arr]);
		else
			printf("%d", a[arr]);

	}
	putchar(10);
}
