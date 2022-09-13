#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */

int print_last_digit(int n)

{
	int any;

	if (n < 0)
	{
		n = -n;
	}
	any = n % 10;
	if (any < 0)
	{
		any = -any;
	}
	_putchar(any + '0');
	return (any);

}
