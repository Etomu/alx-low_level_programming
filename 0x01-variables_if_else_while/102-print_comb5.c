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
int num1, num2;

for (num1 = 0; num1 <= 98; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
putchar((num1 / 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 / 10) + '0');
putchar((num2 % 10) + '0');

if (num1 == 98 && num2 == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
