#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	if (head == NULL || *head == NULL)
	{
		return (NULL);
	}

	while (current != NULL)
	{
		next = current->next; /* Save the next node */
		current->next = prev; /* Reverse the current node's pointer */
		prev = current;       /* Move prev to this node */
		current = next;       /* Move to the next node */
	}

	*head = prev; /* Update the head to the new first node */

	return (*head);
}
