#include <string.h>
#include "main.h"
/**
 *_strlen_recursion - function that returns the length of a string.
 *
 *@s: The string to get the length.
 *
 *Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	{
		len += _strlen_recursion(s + 1) + 1;
	}

	return (len);
}