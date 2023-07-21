#include "main.h"
/**
 */
void print_triangle(int size)
{
	int i, d, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= size; i++)
	{
		j = size - i;
		for (d = i; d < size; d++)
		{
			_putchar(' ');
		}
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
