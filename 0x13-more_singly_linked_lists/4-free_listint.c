#include "lists.h"
/**
 * free_listint-frees a listint_t list.
 * @head:element of list to be freed
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
