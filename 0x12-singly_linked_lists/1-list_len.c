#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns number of elements in a list
 * @h:list
 * Return:Always 0
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
