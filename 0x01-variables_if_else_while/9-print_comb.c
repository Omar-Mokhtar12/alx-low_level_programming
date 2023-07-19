#include <stdio.h>
/**
 *main - program that prints all possible combinations of single-digit numbers.
 *
 *Return: Always return 0
 */
int main(void)
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
