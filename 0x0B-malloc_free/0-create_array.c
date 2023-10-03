#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size:size of the array
 * @c:a character
 * Return:a char pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

		if (s == NULL)
			return (NULL);
	for (j = 0; j < size; j++)
	{
		s[j] = c;
	}
		return (s);
}
