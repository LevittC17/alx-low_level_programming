#include "main.h"

/**
* swap_int - swap the value of two integers
* @a: The first parameter
* @b: The second parameter
*
* Return: return nothing
*/
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;

	*b = tmp;
}
