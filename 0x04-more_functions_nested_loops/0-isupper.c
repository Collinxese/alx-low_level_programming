#include "main.h"

/**
 * _isupper - function that print alphabet
 *
 * @c: parameter to be checked
 *
 * Return: 1 if its an alphabet
 * and 0 if otherwise
 */

int _isupper(int c)
{
	if ((c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
