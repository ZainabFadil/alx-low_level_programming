#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: param
 * Return: int
 */
int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
