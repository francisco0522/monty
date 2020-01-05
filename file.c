#include "monty.h"
/**
 * file - returns (0)
 * @argv: char argv
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	int op, rd, count = 5;
	char *c = malloc(1024);
	stack_t *stack = NULL;

	if (filename == NULL)
		return(0);
//Aqui abrimos el archivo que le pasamos en el argv (test)
	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
//Aqui leemos el archivo
	rd = read(op, c, 1024);
	if (rd == -1)
	{
		free(c);
		close(op);
		return(0);
	}
	while (rd != -1)
		write_file(c, &stack, count);
	free(c);
	close(op);
	return (0);
}
