#include "main.h"
/**
 *more_numbers - function that prints 10 times the numbers, from 0 to 14.
 *               followed by a new line.
 */
void more_numbers(void)
{
	int repeat, n;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(1 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
