#include "main.h"
/**
 * _isalpha - checks for  alphabets
 * @c : the character to be  cheecked
 * Return: 0 for alphabetic character 0 for anything  else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
