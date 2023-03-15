#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 *
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup_str[i] = str[i];

	dup_str[i] = '\0';

	return (dup_str);
}

