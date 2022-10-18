#include "main.h"

/**
* print_alphabet_x10 - print the alphabets using _putchar
* Description: prints lowercase letters a-z
*/
void print_alphabet_x10(void)
{
	char letter;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)

			_putchar(letter);

		_putchar('\n');

	}
}
