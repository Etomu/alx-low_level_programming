#include "main.h"

/**
* print_alphabet - print lowercase alphabet using _putchar
* Description: prints lowercase letters a-z
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)

		_putchar(letter);

	_putchar('\n');
}
