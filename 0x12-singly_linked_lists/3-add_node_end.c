#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end-adds node at the end
 * @head:linked-list
 * @str:node to add
 * Return:address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr, *prev;
	int b;

	curr = malloc(sizeof(list_t));
	if (curr == NULL)
		return (NULL);

	curr->str = strdup(str);
	for (b = 0; str[b]; b++)

	curr->len = b;
	curr->next = NULL;
	prev = *head;

		if (prev == NULL)
		{
			*head = curr;
		}
		else
		{
			while (prev->next != NULL)
				prev->next = prev;
		}
		return (*head);
}
