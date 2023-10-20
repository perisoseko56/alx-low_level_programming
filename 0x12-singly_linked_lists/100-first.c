#include <stdio.h>
void check(void) __attribute__ ((constructor));
/**
 * check - prints out before the main function
 * Return:Always 0
 */
void check(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
