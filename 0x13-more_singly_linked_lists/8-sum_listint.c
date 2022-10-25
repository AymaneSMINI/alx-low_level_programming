#include "lists.h"
/**
 * sum_listint - function
 * @head: pointer
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	for (current = head; current != NULL; current = current->next)
	{
		sum = sum + current->n;
	}
	return (sum);
}
