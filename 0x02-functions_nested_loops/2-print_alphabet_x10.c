#include "main.h"

/**
 * print_alphabet_x10 - will print alphabet 10 times
 *
*/

void print_alphabet_x10(void)
{
	int x = 1;

	while (x <= 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		x++;
	}

}
