#include "main.h"

/**
* malloc_checked - check size of memory
* @b: parameter input
*
* Return: pointer to the new memory address
*/
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr =  malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
