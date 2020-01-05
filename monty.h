#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
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

typedef struct global
{
	char *num;
	char *buffer;
	FILE *file;
} ss;

extern ss sup;

char *read_file(char *filename);
void write_file(char *txt, stack_t **h, unsigned int count);

//michelllllllllll estuvo aqui xD

void pharser(char *buffer, stack_t **h, unsigned int count);
void get_op_func(stack_t **h, unsigned int count, char *command);
void _push(stack_t **head, unsigned int count);
void free_stack(stack_t *h);
void _add(stack_t **h, unsigned int count);
void _pall(stack_t **h, unsigned int count);
void _pint(stack_t **h, unsigned int count);
void _pop(stack_t **head, unsigned int line_number);
void _nop(stack_t **h, unsigned int count);
// hasta aqui xD

#endif /* HOLBERTON_H */
