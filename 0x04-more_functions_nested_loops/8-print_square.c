#include "main.h"

/**
 * print_square - prints a square using # sign
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
