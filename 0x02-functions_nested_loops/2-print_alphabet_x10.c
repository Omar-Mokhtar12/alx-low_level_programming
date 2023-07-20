#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabet, in lowercase.
 *                   followed by a new line.
 */
void print_alphabet_x10(void)
{
	int n = 1;
	char ch;

	while (n <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
