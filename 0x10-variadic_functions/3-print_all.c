#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all-prints anything
 * @format:list of types of arguments passed to the function
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *a = "";

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'b':
					printf("%s%c", a, va_arg(all, int));
					break;
				case 'c':
				printf("%s%d", a, va_arg(all, int));
				break;
				case 'd':
				printf("%s%f", a, va_arg(all, double));
				break;
				case 'e':
					s = va_arg(all, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", a, s);
						break;

				default:
					i++;
					continue;
			}
			a = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
