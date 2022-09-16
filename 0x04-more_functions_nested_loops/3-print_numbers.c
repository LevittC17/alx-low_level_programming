#include "main.h"

/**
 * print_numbers - Function to print numbers from 0 - 9 followed by a new line
 * Return: returns nothing
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
