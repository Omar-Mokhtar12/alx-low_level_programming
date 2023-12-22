#include<stdlib.h>
#include"main.h"
/**
 *create_array - function that creates an array of chars.
 *               and initializes it with a specific char.
 *@size: Size of the array.
 *@c: The char with which to initialize the array.
 *Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
