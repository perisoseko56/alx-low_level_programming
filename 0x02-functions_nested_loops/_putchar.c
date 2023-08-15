#include <unistd.h>
/**
 * _putchar-writes the character c to stdout
 * @c: character to be  printed
 * Return: on  success  1
 * -1 is returned  on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
