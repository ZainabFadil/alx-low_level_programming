#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: param
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		freed = *head;
		*head = (*head)->next;
		free(freed);
	}
}
