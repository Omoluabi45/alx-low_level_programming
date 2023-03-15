#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a specific char
 *
 * @size: size of the array
 * @c: char to initialize the array with
 *
 * Description: This function dynamically allocates an array of characters of a given size and initializes each element
 * of the array to the given char c. It returns a pointer to the newly created array, or NULL if the allocation fails.
 *
 * Return: pointer to the array, NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * size);

    if (size == 0 || str == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        str[i] = c;

    return (str);
}

