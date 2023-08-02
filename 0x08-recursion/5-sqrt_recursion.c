#include "main.h"

/**
 * _sqrt_recursive - primary function
 *
 * @n: int number
 * @g: int geuss
 *
 * Description: function that returns the natural square root of a number.
 *
 * Return: root of n.
 */
int _sqrt_recursive(int n, int g)
{
	if (g * g > n)
		return (-1);
	if (g * g == m)
		return (g);
	return (_sqrt_recursive(n, g + 1));
}

/**
 * _sqrt_recursion - main function
 *
 * @n: int number
 *
 * Description: function that returns the natural square root of a number.
 *
 * Return: root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (0);
	return (_sqrt_recursive(n, 1));
}
