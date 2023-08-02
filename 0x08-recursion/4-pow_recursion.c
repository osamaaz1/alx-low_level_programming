#include "main.h"

/**
 * _pow_recursion - main function
 * @x: int base
 * @y: int power
 *
 * Description: function that returns the value of x raised to the power of y.
 *
 * Return: x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 1)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
