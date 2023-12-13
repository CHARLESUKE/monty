#include "monty.h"
/**
  *f_sub- this main function substraction
  *@headboy: this variable is the stack head
  *@count: this variable is the line_number
  *Return: absolutely no return
 */
void f_sub(stack_t **headboy, unsigned int count)
{
	stack_t *auxilary;
	int sustain, clots;

	auxilary = *headboy;
	for (clots = 0; auxilary != NULL; clots++)
		auxilary = auxilary->next;
	if (clots < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE);
	}
	auxilary = *headboy;
	sustain = auxilary->next->n - auxilary->n;
	auxilary->next->n = sustain;
	*headboy = auxilary->next;
	free(auxilary);
}
