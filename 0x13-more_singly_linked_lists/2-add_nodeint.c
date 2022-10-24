#include "lists.h"
/**
 * add_nodeint - function
 * @head: header type listint
 * @n: integer
 * Return: header
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error");
		return (0);
	}
	new->n = (int) n;
	new->next = *head;
	*head = new;
	return (*head);
}
