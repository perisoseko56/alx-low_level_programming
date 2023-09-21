#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list -  prints all the elements of a list_t list
 * @list_t: a list
 * @h:a node in the list
 * Return:Always 0.
 */
size_t print_list(const list_t *h)

{
	if (head == NULL)
		printf("[0] (nil)\n");

	const list_t *current = h;
	
	size_t count = 0;
	while (current != NULL)
	{
	printf("%d -> ", current->data);
	current = current->next;

	count++;
	}

	printf("NULL\n");

	return (count);
}
