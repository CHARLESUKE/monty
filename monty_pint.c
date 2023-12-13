#include "monty.h"
/**
 * f_pint - this main function prints the top
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_pint(stack_t **headboy, unsigned int count)
{
	if (*headboy == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*headboy)->n);
}
