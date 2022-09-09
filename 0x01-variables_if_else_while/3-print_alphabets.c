#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 *  followed by a new line.
 *  Return: Always 0 (Success)
 */

int main(void)

{
		char mine;

		for (mine = 'a'; mine <= 'z'; mine++)
		{
		putchar(mine);
		}
		for (mine = 'A'; mine <= 'Z'; mine++)
		{
		putchar(mine);
		}
		putchar('\n');
		return (0);
}
