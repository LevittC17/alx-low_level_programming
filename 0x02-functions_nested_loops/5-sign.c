#include "main.h"

/**
 * print_sign - function to print the sign of a number
 * @c: int type to be used for the argument of the function
 * Return: 0 always if exits properly
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
`	else
	{
		_putchar('0');
		return (0);
	}
}
