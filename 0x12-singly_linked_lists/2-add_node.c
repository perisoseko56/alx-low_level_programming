#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list
 * @head: list
 * @str:str: the node
 * Return:address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *cast;
	int length = 0;

	cast = malloc(sizeof(list_t));

	if (cast == NULL)
		return (NULL);
	while (str[length])
		length++;
	cast->len = length;
	cast->str = strdup(str);
	cast->next = *head;
	*head = cast;
	return (cast);
}
