#include "monty.h"
/**
 * f_push - this main function add node to
 * the stack
 * @headboy: this variable is the stack head
 * @count: this variable is the line_number
 * Return: absolutely no return
*/
void f_push(stack_t **headboy, unsigned int count)
{
	int m, k = 0, flaggi = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flaggi = 1; }
		if (flaggi == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(bus.file);
			free(bus.content);
			free_stack(*headboy);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*headboy);
		exit(EXIT_FAILURE); }
	m = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(headboy, m);
	else
		addqueue(headboy, m);
}
