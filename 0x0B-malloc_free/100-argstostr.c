#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr-concatenates all the arguments of your program
 * @ac:number of arguments
 * @av:string argument
 * Return:a pointer to a new string or null
 */
char *argstostr(int ac, char **av)
{
	int m = 0, p = 0, q = 0, r = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (p < ac)
	{
		while (av[p][q])
		{
			m++;
			q++;
		}
		q = 0;
		p++;
	}
	s = malloc((sizeof(char) * m) + ac + 1);

	p = 0;
	while (av[p])
	{
		while (av[p][q])
		{
			s[r] = av[p][q];
			r++;
			q++;
		}
		s[r] = '\n';

		q = 0;
		r++;
		p++;
	}
		r++;
		s[r] = '\0';
			return (s);
}
