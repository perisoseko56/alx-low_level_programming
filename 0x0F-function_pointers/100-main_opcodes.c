#include <stdio.h>
#include <stdlib.h>
/**
 * main-prints the opcodes of its own main function
 * @argc:no. of arguments
 * @argv:array of arguments
 * Return:Always 0
 */
int main(int argc, char *argv[])
{
	int bytes, a;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;

	for (a = 0; a < bytes; a++)
	{
		if (a == bytes - 1)
		{
			printf("%02hhx\n", c[a]);
			break;
		}
	printf("%02hhx ", c[a]);
	}
	return (0);
}
