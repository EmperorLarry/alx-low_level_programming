#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)

{
		char mine;

		for (mine = 'z'; mine >= 'a'; mine--)
		{
			putchar(mine);
		}
		putchar('\n');
		return (0);
}
