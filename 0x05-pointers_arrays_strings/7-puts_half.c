#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int lenght;
	int k, n;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	if (lenght % 2 == 0)
	{
		for (k = lenght / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	} 
	else
	{
		for (n = (lenght - 1) / 2; n < lenght - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');

}
