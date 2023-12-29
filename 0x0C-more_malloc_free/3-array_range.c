#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum value (included)
 * @max: the maximum value (included)
 *
 * Return: the pointer to the newly created array
 *         or NULL if min > max or if malloc fails
 */
int *array_range(int min, int max)
{
	int total_size, i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	total_size = max - min + 1;
	ptr = malloc(total_size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < total_size; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
