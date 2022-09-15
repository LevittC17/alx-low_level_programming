#include "main.h"

/**
 * _isalpha - Function to see if c is a letter, lowercase or uppercase
 * @c: int type to be used for the argument of this function
 * Return: 0 always if exits properly
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
