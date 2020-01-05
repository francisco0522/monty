#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"
/**
 * pall - function that prints all the elements of a dlist
 * @h : const - list_t
 * @count: count.
 * Return: the number of notes.
 */
void pall(stack_t **h, unsigned int count)
{
	stack_t *temp;

	(void) count;

	temp = *h;
	for (; temp; temp = temp->next)
		printf("%d\n", temp->n);
}
