#include <stdio.h>
/**
 *main - program that prints all the numbers of base 16 in lowercase.
 *                   followed by a new line.
 *
 *Return: Always return 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
