#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: param
 * Return: void
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *deleted;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	deleted = *head;
	*head = (*head)->next;
	free(deleted);
	return (n);
}
