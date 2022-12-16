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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
