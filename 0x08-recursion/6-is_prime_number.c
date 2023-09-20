#include "main.h"
#include <stdio.h>

/**
 * is_prime_number- returns 1 if the input integer is a prime number
 * @n:input integer
 * Return: Always 0
 */
int is_prime_number(int n)
{
	int divisor;

	if (n <= 1)
	{
		return (0);
	}
	for (divisor = 2; divisor * divisor <= n; divisor++)
		if (n % divisor == 0)
	{
		return (0);
	}
	return (1);
	return (is_prime_number(n));
}
