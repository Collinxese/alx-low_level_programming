#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int j;
	int x;

	for (n = 0 ; n < 10 ; n++)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (x = 2 ; x < 10 ; x++)
				if (n < j && j < x)
				{
					putchar(n + '0');
					putchar(j + '0');
					putchar(x + '0');
					if (n + j + x != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
		}
	}
	putchar('\n');
	return (0);
}


