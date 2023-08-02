#include "main.h"

/**
 * factorial - main function
 * @n: int number to find fact
 *
 * Description: function that returns the factorial of a given number.
 *
 * Return: factorial of n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n * factorial(n - 1));
}
