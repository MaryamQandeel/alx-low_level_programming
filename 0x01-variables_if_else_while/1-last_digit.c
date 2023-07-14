#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
sh: 1: d: not found


int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("digit is greater than 5\n", n);
	else if (digit = 0)
		printf("digit is 0\n", n);
	else (digit < 6, digit != 0)
		printf("digit is less than 6 and not 0 \n",n);
	return (0);
}
