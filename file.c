#include "monty.h"
/**
 * file - returns (0)
 * @argv: char argv
 * Return: Always 0.
 */
char *read_file(char *filename)
{
	int op, rd;
	char *c = malloc(1024);

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
	write_file(c, rd);
/*Aqui escribimos en el STDOUT pero no se necesita hacer
//Esta parte solo es para testear!!!!
	wr = write(STDOUT_FILENO, c, rd);

	if (wr == -1 || wr != rd)
	{
		free(c);
		close(op);
		return (0);
	}
*/
	free(c);
	close(op);
	return (0);
}
