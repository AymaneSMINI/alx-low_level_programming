#include "lists.h"
/**
 * free_listint - function
 * @head: pointer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
