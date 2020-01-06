#include "monty.h"
/**
 * main - returns (0)
 * @argc: int argc
 * @argv: char argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *file;
	int leng;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = argv[1];
	leng = strlen(file);
	leng--;
	if (file[leng - 1] == '.' && file[leng] == 'm')
		read_file(argv[1]);

	return (0);
}
