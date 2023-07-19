#include "main.h"
/**
 * _isalpha - Entry part
 * @c: The character to be test
 * Description: return 1 if it is a letter
 *
 * Return: 1 if c is a letter
*/

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
