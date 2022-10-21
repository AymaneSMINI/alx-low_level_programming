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
	for (tmp = head; tmp->next; tmp = tmp->next)
		;
	free(tmp->str);
	free(tmp);
	}
}
