#include<stdlib.h>
#include"main.h"
/**
 * _strdup - Duplicates a string using malloc.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int length = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	dup = (char *) malloc(sizeof(char) * (length + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
