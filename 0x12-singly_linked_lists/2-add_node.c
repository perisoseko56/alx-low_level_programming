#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node- adds a new node at the beginning of a list
 * @head:pointer to a pointer of list_t
 * @str:string to be duplicated
 * Return:address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	while (str[len])
		len++;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		printf("NULL\n");
	}

	node->str = strdup(str);
	if (node->str == NULL)
	{
		printf("string duplication failed\n");
		free(node);
		return (NULL);
	}

	node->len = len;
	node->next = (*head);
	(*head) = node;

	printf("[%u] %s\n", len, str);
	return (node);
}
