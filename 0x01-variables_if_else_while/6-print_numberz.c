#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
	 * main - Entry point
	 *
	 * Description:  The main function serves as the starting
	 * point for program execution.
	 *
	 * Return: Always 0 (Success)
	 */
int main(void)
{
for(int i = 0; i < 10; i++)
{
putchar(i+'0');
}
putchar('\n');
return (0);
}
