#include "main.h"

/**
 * print_line - print a line with a \n
 * @n: number of underscores to print
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
