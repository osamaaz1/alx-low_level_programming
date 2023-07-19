#include "main.h"
/**
 * _islower - Entry part
 * @c: The character to be test
 * Description: return 0 if the letter is small
 *
 * Return: 1 if c is capital and 0 if c is small
*/

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else if (c > 64 && c < 91)
		return (0);
	return (0);
}
