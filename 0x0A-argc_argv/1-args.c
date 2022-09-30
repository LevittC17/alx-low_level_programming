#include <stdio.h>

/**
* main - Prints the number of arguments
* @argc: The argument count
* @argv: The array of arguments
*
* Return: On success 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
