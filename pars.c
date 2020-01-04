#include "monty.h"
/**
 * file - returns (0)
 * @argv: char argv
 * Return: Always 0.
 */
char *write_file(char *txt, int text)
{
	char *str;
	//char *token;
	//int wr;

	str = strtok(txt, " \n\t");
	//token = strtok(NULL, " \n\t");
	if (str && str[0] != '#')
	{
		printf("%s\n", str);
		printf("%d\n", text);
	}
	/*wr = write(STDOUT_FILENO, token, text);

	if (wr == -1 || wr != text)
	{
		return (0);
	}
*/
	return (0);
}
