#include<stdlib.h>
#include"main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string,
 *         or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *sum;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = ' ';
	}
	if (s2 == NULL)
	{
		s2 = ' ';
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	sum = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (sum == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len1; i++)
	{
		sum[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		sum[len1 + j] = s2[j];
	}
	sum[len1 + len2] = '\0';
	return (sum);
}
