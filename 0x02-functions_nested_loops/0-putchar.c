<<<<<<< HEAD
#include <unistd.h>
#include "main.h"

/**
 *
 * * main - print putchar
 *
 * * Return: 0 always
 *
 * */

int main(void)

{

 _putchar('_');
 _putchar('p');
 _putchar('u');
 _putchar('t');
 _putchar('c');
 _putchar('h');
 _putchar('a');
 _putchar('r');
 _putchar('\n');

 return (0);

}
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
>>>>>>> 0bacd94ad0e106388032aacf07b958cd3ecdf0fc
