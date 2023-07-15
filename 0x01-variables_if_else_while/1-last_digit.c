#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - entry point.
 *
 *Description: Generat rand num n and prt the last digit along with its val.
 *
 *Return: 0 if success.
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = abs(n % 10);
	if (n < 0)
		last_digit = -1 * last_digit

	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
		printf(" and is greater than 5\n");

	else if (last_digit == 0)

		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
