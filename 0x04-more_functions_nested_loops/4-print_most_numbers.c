#include "main.h"



/**
 *
 * * more_numbers - prints numbers 0 to 14 ten times
 *
 * * Return: void
 *
 * */



void more_numbers(void)

{

		int i;

			int j = 0;

				int second_digit;



					while (j < 10)

							{

										i = 0;



												while (i < 15)

															{

																			if (i < 10)

																								second_digit = i;

																						else

																										{

																															second_digit = i % 10;

																																			_putchar((i / 10) + '0');

																																						}

																									_putchar(second_digit + '0');

																												i++;

																														}

														j++;

																_putchar('\n');

																	}

}
