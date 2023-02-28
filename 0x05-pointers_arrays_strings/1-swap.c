#include "main.h"

/**
 * swap_int - function to swap value of intergers
 *
 * @a: variable given
 * @b: variable given
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
