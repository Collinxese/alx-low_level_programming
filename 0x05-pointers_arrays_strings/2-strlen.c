#include "main.h"

/**
 * _strlen - function to return lenght of string
 *
 * @s: string
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
