#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - function to print a string in reverse order
* @s: The string to reverse
*
* Return: void
*/
void print_rev(char *s)
{
	int count = strlen(s);

	while (count--)
		putchar(*(s + count));
	putchar(10);
}
