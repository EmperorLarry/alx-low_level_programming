#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of int, followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", a[k]);
		if (k < n - 1)
			printf(", ");

	}
	putchar('\n');
}
