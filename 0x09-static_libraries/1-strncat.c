#include "main.h"
/**
 * _strncat-concatenates two strings use at most n bytes
 * @src:string to be  appended to src
 * @dest:string to be  apppended  upon
 * @n:maximum number  of  bytes from src
 * Return:0
 */
char *_strncat(char *dest, char *src, int n)
{

	int index  = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
