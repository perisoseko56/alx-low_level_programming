#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @h:a node in the list
 * Return:Always 0.
 */
size_t print_list(const list_t *h)

{
	const list_t *current = h;
	size_t count = 0;

	if (h == NULL)
		printf("[0] (nil)\n");
	while (current != NULL)
	{
	printf("%s -> ", current->str);

	current = current->next;
	count++;
	}

	printf("NULL\n");

	return (count);
}
