#include "main.h"

/**
* _strspn - Function to get length of a substring prefix
* @s: The string to check from
*
* Return: Number of bytes in string s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
