#include "main.h"

/**
 * _isupper - Function to print uppercase letters
 * @c: test character
 * Return: 1 if exits properly, otherwise return 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
