#include "main.h"

/**
 * print_last_digit - function that print last digit
 *
 * @n: function parameter
 *
 * Return: always k
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;

	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}


