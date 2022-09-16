#include "main.h"

/**
 * _isalphabet - Function to see if c is a letter, lowercase or uppercase
 * @c: int type to be used for the argument of this function
 * Return: 0 always if exits properly
 */
int _isalphabet(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
