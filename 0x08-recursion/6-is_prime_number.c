#include "main.h"
#include <stdio.h>
int _prime(int n, int i);
/**
 * is_prime_number- returns 1 if the integer is a prime number
 * @n:input integer
 * Return:1 if prime number, else 0
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime-checks if number is prime.
 * @n:number to be checked.
 * @i:iterator
 * Return:1 if prime else 0
 */
int _prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (_prime(n, i + 1));
}
