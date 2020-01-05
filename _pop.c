#include "monty.h"
/**
 * pop -  The opcode pop removes the top element of the stack.
 * @head: Head of the list
 * @line_number: the list
 *
 * Return: nothing
 */
void pop(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!*head)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		free_s(*head);
		exit(EXIT_FAILURE);
	}

	temp = (*head)->next;
	free(*head);
	*head = temp;
	if (*head != NULL)
		temp->prev = NULL;
}
