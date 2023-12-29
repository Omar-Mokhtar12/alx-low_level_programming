#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: an array of nmemb elements.
 *@size: size bytes.
 *Return: eturns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	if (total_size / size != nmemb)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
