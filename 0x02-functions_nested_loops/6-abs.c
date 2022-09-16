#include "main.h"

/**
 * _abs - function to compute the absolute value of an integer
 * @c: int type to be used for the argument of the function
 * Return: 0 always if exits properly
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}
