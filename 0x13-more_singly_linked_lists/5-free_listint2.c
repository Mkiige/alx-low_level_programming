#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head of list
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (!head)
		return;
	current = *head;
	while (current)
	{
		temp = current;
		current = temp->next;
		free(temp);
	}
	*head = NULL;
	head = NULL;
}
