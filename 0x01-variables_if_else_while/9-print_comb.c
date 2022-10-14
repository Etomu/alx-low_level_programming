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
int num;

for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
{
continue;
}	
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
