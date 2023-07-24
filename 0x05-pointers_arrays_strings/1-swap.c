#include "main.h"
/**
 * swap_int - main function.
 * @a : first num
 * @b : second num
 *
 * Description: swap the value of a, b
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
