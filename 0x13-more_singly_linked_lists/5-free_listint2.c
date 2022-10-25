#include "lists.h"
/**
 * free_listint2 - function
 * @head: pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while ((*head) != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
