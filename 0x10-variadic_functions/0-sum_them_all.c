#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all-returns the sum of all its parameters
 *@n:integer
 *Return:Always  0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list b;
	unsigned int i, sum = 0;

	va_start(b, n);

	for (i = 0; i < n; i++)
		sum += va_arg(b, int);

	va_end(b);
	return (sum);
}
