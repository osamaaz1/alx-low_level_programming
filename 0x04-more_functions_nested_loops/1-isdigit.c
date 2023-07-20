#include "main.h"
/**
 * _isdigit - Entry part
 * @c: The character to test
 * Description: return 1 if its a digit
 *
 * Return: 1 if its digit and 0 if its not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
