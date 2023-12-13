#include "monty.h"
/**
 * f_pstr - this main function prints
 * d string starting at d top of d stack,
 * followed by a new st
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_pstr(stack_t **headboy, unsigned int count)
{
	stack_t *i;
	(void)count;

	i = *headboy;
	while (i)
	{
		if (i->n > 127 || i->n <= 0)
		{
			break;
		}
		printf("%c", i->n);
		i = i->next;
	}
	printf("\n");
}
