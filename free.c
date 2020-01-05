#include "monty.h"
/**
 * free_s - free_s.
 * @stack: stack_t stack.
 */
void free_s(stack_t *stack)
{
	stack_t *head;

	while (stack != NULL)
	{
		head = stack->next;
		free(stack);
		stack = head;
	}
	fclose(s.f);
	free(s.data);
}
