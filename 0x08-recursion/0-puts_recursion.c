#include "main.h"

/**
* _puts_recursion - print a string + new line
* @s: character to be printed
*
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putcahar(s[0]);
		_puts_recursion(s + 1);
	}
}
