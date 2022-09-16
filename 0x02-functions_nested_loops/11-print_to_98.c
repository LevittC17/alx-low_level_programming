#include "main.h"

/**
 * print_to_98 - Print all natural numbers from input to 98
 * @n: Set initial counter
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n); 
	}
	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
