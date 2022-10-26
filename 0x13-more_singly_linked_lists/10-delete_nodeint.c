#include "lists.h"
/**
 * delete_nodeint_at_index - function
 * @head: pointer
 * @index: integer
 * Return: 1 True 0 false
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *current;

	current = *head;
	if (index == 0)
	{
		if (current == NULL)
			return (-1);
		tmp = *head;
		*head = (*head)->next;
	}
	else
	{
		for (i = 0; i < (index - 1) && current != NULL; i++)
			current = current->next;
		if ((current == NULL || current->next == NULL) && i != 0)
			return (-1);
		tmp = current->next;
		current->next = tmp->next;
	}
	free(tmp);
	return (1);
}
