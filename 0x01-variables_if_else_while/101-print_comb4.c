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
	int a = 0, b, c;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				if (a < b && a != b && b < c && a != c && b != c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a + b + c != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}

		a++;
	}
	putchar('\n');

	return (0);
}
