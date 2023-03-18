#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, in the reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		outchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
