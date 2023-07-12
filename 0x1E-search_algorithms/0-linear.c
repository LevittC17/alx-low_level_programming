#include <stdio.h>

/**
 * Linear search algorithm to search for
 * a value in an array of integers
 * Argument: array, size, value
 *
 * @array: input array
 * @size_t: size of array
 * @value: item to search in
 * Return: EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < (int)size; i++)
	{
		printf("Checking array[%u] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-i);
}
