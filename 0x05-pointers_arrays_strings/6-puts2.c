#include <stdio.h>
#include "main.h"

/**
* puts2 - function to print every other character
*@str: The parameter string
*
* Return: void
*/
void puts2(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		if (c % 2 == 0)
			putchar(*(str + c));
		c++
	}
	putchar(10);
}
