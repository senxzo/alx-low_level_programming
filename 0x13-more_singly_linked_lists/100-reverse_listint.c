#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of the list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;  /* Save the next node */
		current->next = prev;  /* Reverse the current node's pointer */
		prev = current;        /* Move prev and current one step forward */
		current = next;
	}

	*head = prev;  /* Update head to the new first node */

	return (*head);
}
