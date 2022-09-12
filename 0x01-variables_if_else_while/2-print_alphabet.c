#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always, if exits successully
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
