#include <stdlib.h>
#include <time.h>

/*
 *main - Entry point
 *
 *Description - using if statement to find if the number is pos or neg.
 *
 *Return: always 0 (Success).
 *
 * **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero", n);
	return (0);
}
