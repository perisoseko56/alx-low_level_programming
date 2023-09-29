#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strlen-returns length of string
 * @s:string
 * Return:length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	return (0);
	else
		return (1 + _strlen(s + 1));
}
/**
 * _check-checks if the string is empty
 * @s:string being checked
 * @a:iterator
 * @b:iterator
 * Return: Always 0
 */
int _check(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
	return (0 + _check(s, a + 1, b - 1));
			}
			return (0);
}
/**
 * is_palindrome-checks for a palindrome
 * @s:string to be checked
 * Return: 1 if is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	return (1);
	return (_check(s, 0, _strlen(s) - 1));
}


