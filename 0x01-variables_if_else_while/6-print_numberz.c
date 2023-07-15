#include <stdio.h>

/**
 * main - point
 *
 * Description: somthing
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
