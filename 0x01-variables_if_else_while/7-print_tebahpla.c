#include <stdio.h>

/**
 * main - point
 *
 * Description: somthing
 *
 * Return: 0 (success)
*/

int main(void)
{	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
