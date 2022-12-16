#include "main.h"

/**
* _strcpy - func to copy a string and paste at a specified location
* @dest: destination parameter
* @src: source parameter
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int spy = 0;

	while (*(src + spy) != '\0')
	{
		*(dest + spy) = *(src + spy);
		spy++;
	}
	*(dest + spy) = '\0';


	return (dest);
}
