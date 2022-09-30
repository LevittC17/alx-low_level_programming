#include <stdlib.h>
#include <stdio.h>

/**
* main - Entry Point
* @argc: The argument count
* @argv: The array of arguments
*
* Return: multiplication results
*/
int main(int argc, char *argv[])
{
	int i, mul;

	printf("argc =  %d\n", argc);

	printf("Let's see whats in argv[]");

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			mul = atoi(mul * argv[i]);
		}
		return (mul);
	}
}
