#include "main.h"

/**
 * print_alphabet_x10 - function prints alphabet 10 times
 *
 * Return: always 0
 */


void print_alphabet_x10(void)
{
	int n;
	char i;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
