#include "main.h"
#include <ctype.h>

/**
 *_isdigit - function that checks for a digit (0 through 9)
 *@c: the number we want to check
 *Return: Returns 1 if c is a digit.
 *        Returns 0 otherwise.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
