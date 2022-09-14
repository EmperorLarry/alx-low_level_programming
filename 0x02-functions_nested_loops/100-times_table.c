#include "main.h"
/**
 * print - function to print recursively using _putchar
 * @var: variable to be printed
 */
void print(int var)
{
	if (var / 10)
		print(var / 10);
	_putchar('0' + (var % 10));
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: time table to print
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
				_putchar('0' + k);
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar(' ');
				print(k);
			}
				else
			{
				print(k);
			}
			if (k < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
