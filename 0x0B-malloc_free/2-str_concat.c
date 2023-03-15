#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';

	return (concat);
}

