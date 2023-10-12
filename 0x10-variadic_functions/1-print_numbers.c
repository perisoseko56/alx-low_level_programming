#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers-prints numbers followed by a new line
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the  functions
 * Return:Always 0(success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int a;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));
				if (a != (n - 1) && separator != NULL)
				printf("%s", separator);
				}

				printf("\n");
				va_end(nums);
				}
