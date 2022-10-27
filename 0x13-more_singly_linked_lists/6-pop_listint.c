#include "lists.h"
/**
 * pop_listint-deletes the head node of a listint_t
 * @head: pointer to the address of head of list
 * Return:0 if linkef list is empty
 * otherwise node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
