#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: param
 * @n: param
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *curr;

	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	curr = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = new_node;
	return (new_node);
}
