#include "monty.h"
/**
 * functions - functions
 * @stack: stack_t stack
 * @cont: int cont
 * @function: char function
 */
void functions(stack_t **stack, unsigned int cont, char *function)
{
	int i = 0;

	instruction_t cm[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (cm[i].opcode)
	{
		if (strcmp(cm[i].opcode, "nop") == 0)
			break;
		else if ((strcmp(cm[i].opcode, function)) == 0)
		{
			cm[i].f(stack, cont);
			break;
		}
		i++;
	}
	if (cm[i].f == NULL)
	{
		dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", cont, function);
		exit(EXIT_FAILURE);
	}

}
