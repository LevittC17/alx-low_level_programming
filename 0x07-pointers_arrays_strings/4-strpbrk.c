#include "main.h"

/**
* _strbrk - Function to search a string for any set of bytes
* @s: string to check
* @accept: string to check against
*
* Return: Pointer to byte that matches it
* On no match, NULL is returned
*/
char *_strbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[i])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
