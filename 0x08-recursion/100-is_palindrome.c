#include "main.h"
#include <stdio.h>
/**
 * is_palindrome-checks for a palindrome
 * @s:string to be checked
 * Return: 1 if is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	int k = strlen(s);
	int a = s - 1;
	int b = s + 1;

	if (a >= b)
	{
	return (1);
	}

	if (s[a] != s[b])
	{
	return (0);
	}
	return (is_palindrome(s, b + 1, a - 1));
}
