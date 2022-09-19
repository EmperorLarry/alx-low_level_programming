#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string, followed by a new line
 * @str: string to print the chars from
 */

void puts2(char *str)
{
	int lenght;
	int k;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	for (k = 0; k < lenght; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
