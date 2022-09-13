#include "main.h"
/**
 * main - a program that prints text using putchar
 * main.h  user-defined include function prototype
 * Followed by a new line.
 * Return: returns 0 on success.
 */
int main(void)
{
	char output[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
