#include "main.h"
#include <stdio.h>

/**
* _strstr - Function to locate a substring
* @needle: substring to locate in haystack
* @haystack: string to check from
*
* Return: Pointer to beginning of the needle
* On error, NULL is returned - no match
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
