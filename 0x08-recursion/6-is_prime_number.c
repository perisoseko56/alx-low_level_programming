#include "main.h"
#include <stdio.h>

int is_prime_number_recursive(int n, int i);
/**
 * is_prime_number- returns 1 if the input integer is a prime number
 * @n:input integer
 * Return: Always 0
 */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 1));
}
/**
 * is_prime_number_recursive - recursively checks if n is a prime number
 * @n:input integer
 * @i:number of iterations
 * Return: 1 if prime, 0 if not.
 */
int is_prime_number_recursive(int n, int i)
{
	if (n <= 1)
	return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if (n / i < i)
		return (1);
	return (is_prime_number_recursive(n, i + 1));
}
