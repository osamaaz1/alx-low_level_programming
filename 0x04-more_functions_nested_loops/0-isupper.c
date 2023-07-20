#include "main.h"
/**
 * _isupper - Entry part
 * @c: The character to test
 * Description: return 0 if the letter is lowercase
 *
 * Return: 1 if c is capital and 0 if c is small
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
