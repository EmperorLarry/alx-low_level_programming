#include "main.h"

/**
 * _strcmp - Function which compare two strings and
 * @s1: first string to compare
 * @s2: second string to compare
 * Return:
 * returns zero if s1 == s2
 * returns negative number if s1 < s2
 * returns positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int k = 0, diff = 0;

	while (1)
	{
		if (s1[k] == '\0' && s2[k] == '\0')
			break;
		else if (s1[k] == '\0')
		{
			diff = s2[k];
			break;
		}
		else if (s2[k] == '\0')
		{
			diff = s1[k];
			break;
		}
		else if (s1[k] != s2[k])
		{
			diff = s1[k] - s2[k];
			break;
		}
		else
			k++;
	}
	return (diff);
}
