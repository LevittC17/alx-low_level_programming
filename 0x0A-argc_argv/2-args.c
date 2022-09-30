#include <stdio.h>

/**
* main - print all arguments
* @argc: The Argument counter
* @argv: The array of arguments
*
* Return: On success 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
