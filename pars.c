#include "monty.h"
/**
 * file - returns (0)
 * @argv: char argv
 * Return: Always 0.
 */
void write_file(char *txt, stack_t **h, unsigned int count)
{
	char *str, *token;

	str = strtok(txt, " \n\t");
	token = strtok(NULL, " \n\t");
	sup.num = token;
	if (str && str[0] != '#')
		get_op_func(h, count, str);
}
