#include "main.h"

/**
 * _puts - prints a stringi followed by a new line
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
