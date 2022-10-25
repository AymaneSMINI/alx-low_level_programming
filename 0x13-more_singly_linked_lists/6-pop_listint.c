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

	current = *head;
	if (current == NULL)
	{
		return (0);
	}
	n = (current)->n;
	current = current->next;
	*head = current;
	return (n);
}
