#include "monty.h"

/**
 * mulMonty - mul the top  the stack.
 * @head: double pointer to head of the stack.
 * @line_number: counter for line number.
 * Return: void.
 */
void mulMonty(stack_t **head, unsigned int line_number)
{
	stack_t *temp;

	if (!head || !*head || !((*head)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	(*head)->n *= temp->n;
	(*head)->prev = NULL;
	free(temp);
}
