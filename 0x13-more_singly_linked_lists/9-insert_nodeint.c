#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: param
 * @n:param
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	curr = *head;
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (curr)
	{
		if (i == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
