#include <stdio.h>
/**
 * main-entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;

	char c = 'a';

	while
		(c <= 'z');
	{
		putchar(c);
		c++;
	}
	for (n = 65; n <= 90; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
