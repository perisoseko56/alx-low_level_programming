#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk-searches a string for any of a set of bytes.
 * @s:string to be searched
 * @accept:string with byte
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
	return (NULL);
}
