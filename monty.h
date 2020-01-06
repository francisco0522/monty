#ifndef _MONTY_H
#define _MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct str - str
 * @number: char number
 * @data: char data
 * @f: FILE f
 */
typedef struct str
{
	char *number;
	char *data;
	FILE *f;
} strs;

extern strs s;

void read_file(char *filename);
void write_file(char *txt, stack_t **h, unsigned int count);
void free_s(stack_t *h);
void functions(stack_t **stack, unsigned int cont, char *function);
void push(stack_t **head, unsigned int count);
void pall(stack_t **h, unsigned int count);
void pop(stack_t **head, unsigned int line_number);
void nop(stack_t **head, unsigned int line_number);
void swap(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void add(stack_t **head, unsigned int line_number);
void sub(stack_t **head, unsigned int line_number);
void mulMonty(stack_t **head, unsigned int line_number);
void divMonty(stack_t **head, unsigned int line_number);
void modMonty(stack_t **head, unsigned int line_number);
#endif /* _MONTY_H */
