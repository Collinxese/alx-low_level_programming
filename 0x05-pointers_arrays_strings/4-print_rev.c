#include "main.h"

/**
 * print_rev -- function to print string in reverse
 *
 * @s: string to print in reverse
 *
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[1] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
