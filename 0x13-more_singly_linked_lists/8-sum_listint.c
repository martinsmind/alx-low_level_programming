#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data (n) of a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The sum of all the data (n) of the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
