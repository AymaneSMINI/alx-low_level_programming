#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: header type listint
 * @n: integer
 * Return: header
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error");
		return (0);
	}
	new->n = (int) n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		for (current = *head; current->next; current = current->next)
			;
		current->next = new;
	}
	return (*head);
}
