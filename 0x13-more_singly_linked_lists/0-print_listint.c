#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: param
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	unsigned int l = 0;

	while (current)
	{
		l++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (l);
}
