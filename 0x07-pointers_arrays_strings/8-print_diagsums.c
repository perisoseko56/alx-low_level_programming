#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals.
 * @a:pointer to int
 * @size: diagonal size
 * Return: integer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int n;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
