#include "main.h"

/**
 * rev_string - a function that revrses a string
 * @s: is the string in question
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int k, lenght1, lenght2;

	lenght1 = 0;
	lenght2 = 0;
	while (s[lenght1] != '\0')
	{
		lenght1++;
	}
	lenght2 = lenght1 - 1;
	for (k = 0; k < lenght1 / 2; k++)
	{
		temp = s[k];
		s[k] = s[lenght2];
		s[lenght2--] = temp;
	}
}
