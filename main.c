#include "monty.h"
/**
 * main - returns (0)
 * @argc: int argc
 * @argv: char argv
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return (0);
	}
	read_file(argv[1]);

	return (0);
}
