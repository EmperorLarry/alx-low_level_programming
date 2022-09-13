#include "main.h"
/**
 * print_alphabet_x10 - function that print 10 times the alphabet, in lowercase
 * Followed by a new line.
 * Return: returns void on success.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
