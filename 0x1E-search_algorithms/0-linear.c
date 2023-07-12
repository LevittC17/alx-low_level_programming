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
	if (array == NULL)
	{
		return (-1);
	}
	size_t i;
	for (i = 0; i < size; i++)
	{
		printf("Checking array[%zu] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-i);
}
