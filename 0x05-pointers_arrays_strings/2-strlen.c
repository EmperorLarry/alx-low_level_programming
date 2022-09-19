#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}
	return (k);
}
