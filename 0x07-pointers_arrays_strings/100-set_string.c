#include "main.h"
#include <stdio.h>
/**
 * set_string-sets the value of a ptr to a char
 * @s:pointer to a pointer
 * @to:points to a string
 * Return:void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
