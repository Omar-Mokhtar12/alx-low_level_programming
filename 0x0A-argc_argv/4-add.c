#include <stdio.h>
#include <stdlib.h>

int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return 0;
		str++;
	}
	return 1;
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	/* Check if no arguments are provided */
	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}

	/* Iterate through arguments and calculate the sum */
	for (i = 1; i < argc; i++)
	{
		/* Check if the argument is a valid positive integer */
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return 1;
		}

		/* Convert the argument to an integer and add to the sum */
		sum += atoi(argv[i]);
	}

	/* Print the result */
	printf("%d\n", sum);

	return 0;
}
