#include "monty.h"

/**
 * _pint - prints of the stack
 * @head: double pointer  head of the stack.
 * @line_number: counter for line number of the file.
 *
 * Return: void.
 */
void pint(stack_t **head, unsigned int line_number)
{
	stack_t *current = *head;

	if (*head == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", current->n);
}
