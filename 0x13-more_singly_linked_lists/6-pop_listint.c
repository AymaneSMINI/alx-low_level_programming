#include "lists.h"
/**
 * pop_listint(listint_t **head)
 * @head: pointer of pointer
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (*head)
	{
		return (0);
	}
	n = (*head)->n;
	current = *head;
	*head = (*head)->next;
	free(current);
	return (n);
}
