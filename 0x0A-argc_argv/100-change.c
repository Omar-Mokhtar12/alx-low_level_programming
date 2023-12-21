#include <stdio.h>
#include <stdlib.h>

/**
 * minCoins - Calculate the minimum number of coins needed for change
 * @cents: The amount in cents
 *
 * Return: The minimum number of coins needed
 */
int minCoins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			numCoins++;
		}
	}

	return (numCoins);
}

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	result = minCoins(cents);

	printf("%d\n", result);

	return (0);
}
