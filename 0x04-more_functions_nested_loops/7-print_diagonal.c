#include "main.h"



/**
 *
 *  * print_diagonal - draws a diagonal line on the terminal
 *
 *   * @n: number of times \ will be printed
 *
 *    * * Return: void
 *
 *    */



void print_diagonal(int n)

{

		int i = 0;

			int j;



				if (n > 0)

						{

									while (i < n)

												{

																for (j = 1; j <= i; j++)

																					_putchar(' ');

																			_putchar('\\');

																						_putchar('\n');

																									i++;

																											}

										}

					else

							{

										_putchar('\n');

											}

}
