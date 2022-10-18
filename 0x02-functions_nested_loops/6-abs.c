#include "main.h"

/**
* _abs - print absolute values of integers
* @n: number to return absoluteness
* Return: 0 for 0 and positive numbers and -1 for negative
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		n = n * -1;

		return (n);
	}
}
