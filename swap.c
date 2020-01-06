#include "monty.h"
/**
 * swap -The opcode swap swaps the top two elements of the stack.
 * @head: this is the head.
 * @line_number: constant int value
 * Return: is a void
 **/
void swap(stack_t **head, unsigned int line_number)
{
	int number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	number = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = number;
}
