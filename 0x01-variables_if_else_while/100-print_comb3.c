#include <stdio.h>

/**
 * main - point
 *
 * Description: print the digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int a = 0, b;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (a < b && a != b)
			{
				putchar(a);
				putchar(b);
				if (a + b != 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
			digit2++;
		}

		digit1++;
	}
	putchar('\n');

	return (0);
}
