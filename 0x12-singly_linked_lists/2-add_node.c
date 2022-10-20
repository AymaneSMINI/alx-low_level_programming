#include "lists.h"
/**
 * add_node - function
 * @head: pointer
 * @str: char const
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
		new->next = *head;
		*head = new;
	}
	return (*head);
}

