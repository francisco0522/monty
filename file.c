#include "monty.h"
strs s = {NULL, NULL, NULL};
/**
 * read_file - read_file
 * @filename: char filename
 */
void read_file(char *filename)
{
	unsigned int cont = 0;
	ssize_t rd;
	size_t size = 0;
	stack_t *stack = NULL;

	s.f = fopen(filename, "r");
	if (!s.f)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((rd = getline(&s.data, &size, s.f)) != EOF)
	{
		cont++;
		write_file(s.data, &stack, cont);

	}
	fclose(s.f);
	free_s(stack);
	exit(EXIT_SUCCESS);
}
