#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * is_palindrome-returns 1 if a string is a palindrome
 * @s:points to string
 * Return: Always 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length < 1)
		return (1);
	else
		return (0);
	return (is_palindrome(s + 1));
}
