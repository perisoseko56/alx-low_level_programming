#include "main.h"
/**
 * swap_int- swaps the values of two integers
 * @a:first value o be swapped
 * @b:second value to be swapped
 *
 * Return: ALways 0
 */
void swap_int(int *a, int *b)
{
	int car = *a;
	*a = *b;
	*b = car;
}
