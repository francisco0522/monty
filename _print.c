#include "monty.h"

/**
 * _pint - prints of the stack
 * @head: double pointer  head of the stack.
 * @line_number: counter for line number of the file.
 *
 * Return: void.
 */
void _pint(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;

	if (*head == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		free_s(*head);

		exit(EXIT_FAILURE);
	}
	else
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
