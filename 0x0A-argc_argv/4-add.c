#include <stdio.h>
#include <stdlib.h>

/**
* main - Add 2 postitive numbers
* @argc: argument counter
* @argv: array to an argument
*
* Return: On success 0
*/
int main(int argc, char *argv[])
{
	int i, h, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (h = 0; argv[i][h] != '\0'; h++)
		{
			if (argv[i][h] < '0' || argv[i][h] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
