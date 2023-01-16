#include "main.h"

/**
* _isalpha - checks if it is an alphabet
* @c: the number to be checked
* Return: 1 if an alphabet and 0 otherwise
*/

int _isalpha(int c)
{
		if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
