#include "lists.h"
/**
 * add_node_end - function
 * @head: pointer
 * @str: char const
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (0);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (tmp = *head; tmp->next; tmp = tmp->next)
			;
		tmp->next = new;
	}
	return (*head);
}

