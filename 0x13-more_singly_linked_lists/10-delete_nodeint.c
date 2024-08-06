#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t
 * linked list.
 * @head: double pointer to the head of the list.
 * @index: index of the node that should be deleted, starting at 0.
 *
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	/* Handle deletion of the head node */
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}

	/* Check if the node to be deleted is valid */
	temp = current->next;
	if (temp == NULL)
		return (-1);

	current->next = temp->next;
	free(temp);

	return (1);
}
