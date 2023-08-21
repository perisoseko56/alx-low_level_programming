#include "main.h"
#include <stddef.h>
/**
 * _strlen- returns the length of a string
 * @s:pointer to character
 * Return: Always 0
 */
int _strlen(char *str)
{
	size_t length = 0;

		while (*str++)
			length++;
		return (length);
}
