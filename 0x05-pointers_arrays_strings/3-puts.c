#include "main.h"

/**
* _puts - function to print a string
* @str: The parameter string to print
*
* Return: void
*/
void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		putchar(*(str + c));
		c++;
	}
	putchar(10);
}
