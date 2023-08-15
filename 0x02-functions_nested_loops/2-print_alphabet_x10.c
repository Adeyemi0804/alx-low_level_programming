#include "main.h"

/**
* print_alphabet_x10 - Prints the lowercase alphabet 10 times
* followed by a new line each time.
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
