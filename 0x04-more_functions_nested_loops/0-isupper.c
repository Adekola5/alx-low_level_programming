#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: char to check
 *
 * Return: 0 or 1
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
