#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: array of arguments
 * @argc_attribute_((unused)): input value of arrays
 * Return: always 0 (Success)
 */

int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
