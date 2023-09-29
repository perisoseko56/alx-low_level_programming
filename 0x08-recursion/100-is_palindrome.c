#include <string.h>
#include "main.h"
#include <stdio.h>
int _check(s);
/**
 * is_palindrome-checks for a palindrome
 * @s:string to be checked
 * Return: 1 if is a palindrome, else 0
 */
int is_palindrome(char *s)
{
	return (_check(s));
}
/**
 * _strlen-returns length of string
 * @s:string
 * Return:always 0
 */
int _strlen(char *s)
{
	int a = strlen(s);

	return (a);
}
/**
 * _check-checks if the string is empty
 * @a:string being checked
 * Return: Always 0
 */
int _check(s)
{
	if (a  == 0)
		return (1);
	return (is_palindrome(*s + 1));
			}
