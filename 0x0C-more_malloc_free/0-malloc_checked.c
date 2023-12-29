#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the function terminates with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *check;

	check = malloc(b);
	if (check == NULL)
	{
		exit(98);
	}
	return (check);
}
