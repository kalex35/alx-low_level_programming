#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		outchar(i);
	}
	putchar('\n');
	return (0);
}
