#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a pointer to value a
 * @b pointer to value b
 * Return - Void
 */
void swap_int(int *a, int *b)
{
	int ptr;

	ptr = *a;

	*a = *b;
	*b = ptr;
}
