#include "main.h"
/**
 * print_alphabet - function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: returns void on success
 */
void print_alphabet(void)
{
	int i;

	/* ASCII value of a is 97, while z is 122 */
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
