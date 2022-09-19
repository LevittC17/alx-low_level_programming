#include "main.h"

/**
* _strlen - functin to return length of a string
* @s: The parameter
*
* Return: returns length
*/
int _strlen(char *s)
{
	int count;

	while (*(s + count) != '\0')
		count++;

	return (count);
}
