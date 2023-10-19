#include "lists.h"
#include <stdio.h>

/**
 * listint_len - eturns the number of elements in a linked
 * @h: param
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t l = 0;

	while (current)
	{
		l++;
		current = current->next;
	}
	return (l);
}
