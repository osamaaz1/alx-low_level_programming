#include "main.h"

/**
 * is_prime_number - main function
 * @n: test number
 *
 * Description: function that returns 1 if the input integer is a prime else return 0.
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 3 == 0 || n == 1 || n == 0 || n == -1)
		return (0);
	return (1);
}
