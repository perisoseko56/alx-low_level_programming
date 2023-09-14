#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers-prints numbers, followed by a new line.
 * @n:number of integers passed to the function.
 * @separator:string to be printed between numbers
 * Return: Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
	printf("%d", va_arg(nums, int));
	if (index != (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
