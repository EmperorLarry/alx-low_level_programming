#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * Return - Void
 */
void swap_int(int *a, int *b)
{
	int ptr = *a;

	*a = *b;
	*b = ptr;
}
