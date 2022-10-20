#include "lists.h"
/**
 * add_node_end - function
 * @head: pointer
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
	for (tmp = head; tmp->next; tmp = tmp->next)
		;
	free(tmp->str);
	free(tmp);
	}
}
