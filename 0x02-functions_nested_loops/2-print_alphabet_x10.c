#include "main.h"

/**
 * print_alphabet_x10 - Function to print alphabets 10 times
 *
 * Return: 0 always if exits properly
 */
void print_alphabets_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
