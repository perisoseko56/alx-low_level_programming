#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _puts_recursion-prints a string, followed by a new line.
 * @s:string to be printe
 * Return:0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}

	putchar(*s);
	s++;
	_puts_recursion(s);;
}
