#define _GNU_SOURCE
#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - this main function is the monty code
* interpreter
* @aryst: this variables is the number of arguments
* @arggu: this variable is the monty file location
* Return: always return 0 on success
*/
int main(int aryst, char *arggu[])
{
	char *cont;
	FILE *fle;
	size_t sze = 0;
	ssize_t lineread = 1;
	stack_t *stk = NULL;
	unsigned int count = 0;

	if (aryst != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fle = fopen(arggu[1], "r");
	bus.file = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open file %s\n", arggu[1]);
		exit(EXIT_FAILURE);
	}
	while (lineread > 0)
	{
		cont = NULL;
		lineread = getline(&cont, &sze, fle);
		bus.content = cont;
		count++;
		if (lineread > 0)
		{
			execute(cont, &stk, count, fle);
		}
		free(cont);
	}
	free_stack(stk);
	fclose(fle);
return (0);
}
