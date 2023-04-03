#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to delete - indices start at 0.
 *
 * Return: If the function succeeds - 1.
 *         If the function fails - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int node_count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && node_count < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		node_count++;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}
