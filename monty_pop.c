#include "monty.h"
/**
 * f_pop - this main function prints the top
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_pop(stack_t **headboy, unsigned int count)
{
	stack_t *i;

	if (*headboy == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	i = *headboy;
	*headboy = i->next;
	free(i);
}
