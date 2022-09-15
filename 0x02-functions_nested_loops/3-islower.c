#include "main.h"

/**
 * _islower - Function to check for lower case alphabets
 * @c: int data type for the argument of the function
 * Return: 0 always if exits properly
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
