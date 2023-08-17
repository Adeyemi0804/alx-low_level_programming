#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the character '\'.
 * @n: The number of times '\ should be printed.
 */
void print_diagonal(int n)
{
	int spaces, count;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (count = 0; count < n; count++)
	{
		for (spaces = 0; spaces < count; spaces++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
