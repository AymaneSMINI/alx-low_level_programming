#include "lists.h"
/**
 * pop_listint - function
 * @head: pointer of pointer
 * Return: integer
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;
	listint_t *h;

	current = *head;
	if (current == NULL)
	{
		return (0) ;
	}
	n = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (n);
}
