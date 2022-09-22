#include "main.h"

/**
 * _strncpy - a function that copies a string, and its terminating null byte,
 * using at most an inputted number of bytes.
 * @dest: buffer storing the string copy
 * @src:the source string
 * @n: max number of bytes to copy
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	for ( ; z < n; z++)
	{
		dest[z] = '\0';
	}
	return (dest);

}
