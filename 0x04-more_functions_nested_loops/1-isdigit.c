#include "main.h"

/**
 * _isdigit - function that check if parameter is a digit
 *
 * @c: parameter to be checked
 *
 * Return: 1 if is a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' &&  c <= '9')
		return (1);
	else
		return (0);
}
