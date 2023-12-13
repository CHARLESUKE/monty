#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - this main function doubly linked
 * list representation of a stack (or queue)
 * @n: this variable is the integer
 * @prev: this variable points to d previous 
 * element of d stack (or queue)
 * @next: this vairable points to d next element
 * of d stack 'or queue'
 *
 * Description: this is the doubly linked list node
 * structure for stack, queues, LIFO, FIFO
 * Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - this is the variables -args,
 * file, line content
 * @arg: this vairable is the value
 * @file: this variable is the pointer to
 * monty file
 * @content: this variable is the line content
 * @lifi: this variable is the flag change stack <-> queue
 * Description: this description carries values
 * through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - this main opcode and
 * its function
 * @opcode: this variable is the the opcode
 * @f: this variable is the function to handle
 * the opcode
 *
 * Description: this description opcode and
 * its function
 * for stack, this is for the queues, LIFO, FIFO
 * Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_t **headboy, unsigned int number);
void f_pall(stack_t **headboy, unsigned int number);
void f_pint(stack_t **headboy, unsigned int number);
int execute(char *cont, stack_t **headboy, unsigned int count, FILE *fle);
void free_stack(stack_t *headboy);
void f_pop(stack_t **headboy, unsigned int countline);
void f_swap(stack_t **headboy, unsigned int countline);
void f_add(stack_t **headboy, unsigned int countline);
void f_nop(stack_t **headboy, unsigned int countline);
void f_sub(stack_t **headboy, unsigned int countline);
void f_div(stack_t **headboy, unsigned int countline);
void f_mul(stack_t **headboy, unsigned int countline);
void f_mod(stack_t **headboy, unsigned int countline);
void f_pchar(stack_t **headboy, unsigned int countline);
void f_pstr(stack_t **headboy, unsigned int countline);
void f_rotl(stack_t **headboy, unsigned int countline);
void f_rotr(stack_t **headboy, __attribute__((unused)) unsigned int countline);
void addnode(stack_t **headboy, int m);
void addqueue(stack_t **headboy, int m);
void f_queue(stack_t **headboy, unsigned int countline);
void f_stack(stack_t **headboy, unsigned int countline);
#endif
