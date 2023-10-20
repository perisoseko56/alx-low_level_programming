#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list-frees a list
 * @head:the linked list
 * Return:Always 0
 */
void free_list(list_t *head)
{
	list_t *cast

	while ((cast = head) != NULL)
	{
		head = head->next;
		free(cast->str);
		free(cast);
	}
}
