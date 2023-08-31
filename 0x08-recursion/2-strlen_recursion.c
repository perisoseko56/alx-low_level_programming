#include<string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen_recursion-returns the length of a string
 *@s:string to be printed
 *Return:0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
