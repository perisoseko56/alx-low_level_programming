#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator -executes a function given as a parameter.
 *@array:an array
 *@size:size of an array
 *@action:pointer to the function
 *Return:Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
