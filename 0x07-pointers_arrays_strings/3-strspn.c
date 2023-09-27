#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn-gets the length of a prefix substring
 * @s:initial string
 * @accept:string to compare prefix with
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
