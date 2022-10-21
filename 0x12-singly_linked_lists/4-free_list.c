#include "lists.h"
/**
 * free_list - function
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(tmp);
}
