#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, in the reverse
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		outchar(ch);
	}
	putchar('\n');
	return (0);
}
