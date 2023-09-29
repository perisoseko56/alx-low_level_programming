#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * *_memset- fills memory with a constant byte.
 * @s:memory area
 * @b:constant byte
 * @n:number of bytes of memory area
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
