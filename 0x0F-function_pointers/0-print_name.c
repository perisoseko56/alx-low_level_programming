#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name-prints a name
 * @name:points to the name
 * @f:points to the pointer of name.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL )
		return;
	f(name);
}
