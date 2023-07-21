#include "main.h"
/**
 *print_triangle -  function that prints a triangle, followed by a new line.
 *
 *@size: The size of the triangle.
 *       If size is 0 or less, the function should print only a new line.
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
