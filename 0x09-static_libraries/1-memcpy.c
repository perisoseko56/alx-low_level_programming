#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memcpy-copies memory area.
 * @dest: destination
 * @src: source
 * @n: number of bytes copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
