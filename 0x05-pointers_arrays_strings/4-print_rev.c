#include "main.h"

/**
 * print_rev - a function that prints a string in reverse, followed by a new line
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int k, j, lenght;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	lenght = k;
	for (j = lenght - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
