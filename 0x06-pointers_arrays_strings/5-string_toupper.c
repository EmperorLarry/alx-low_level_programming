#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string to modify
 * Return: the resulting string
 */
char *string_toupper(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (str[k] >= 'a' && str[k] <= 'z')
		{
			str[k] = str[k] - 32;
		}
	}
	return (str);
}
