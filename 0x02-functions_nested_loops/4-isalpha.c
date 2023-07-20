#include "main.h"
#include <ctype.h>
/**
 *_isalpha - function that checks for alphabetic character.
 *@c: the charcter we want to check
 *Return: Returns 1 if c is a letter ,lowercase or uppercase.
 *        Returns 0 otherwise.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
