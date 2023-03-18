#include <stdio.h>

/**
 * main - Program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (success)
*/
int main(void)

{

	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);

}
