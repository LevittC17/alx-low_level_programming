#include "main.h"

/**
 * _isdigit - Check if a character is a digit or otherwise
 * @c: test char
 * Return: 1 if its a digit, otherwise return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
