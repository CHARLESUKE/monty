#include "monty.h"
/**
 * f_pchar - this function job prints
 * d char at d top of the stack,followed by
 * a new line
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_pchar(stack_t **headboy, unsigned int count)
{
	stack_t *i;

	i = *headboy;
	if (!i)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	if (i->n > 127 || i->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", i->n);
}
