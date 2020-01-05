#include "monty.h"
/**
 * write_file - write_file
 * @txt: char txt
 * @stack: stack_t stack
 * @cont: int cont
 */
void write_file(char *txt, stack_t **stack, unsigned int cont)
{
	char *text, *token;

	text = strtok(txt, " \n\t");
	token = strtok(NULL, " \n\t");
	s.number = token;
	if (text && text[0] != '#')
		functions(stack, cont, text);
}
