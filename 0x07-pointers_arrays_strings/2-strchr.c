#include "main.h"

/**
* _strchr - Function to locate a character to a string
* @s: The string to check from
* @c: The character to check for
*
* Return: pointer to s
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i(;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
