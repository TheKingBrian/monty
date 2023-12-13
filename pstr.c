#include <stdio.h>
#include <stdlib.h>
#include "monty.h"
/**
 * pstr - prints the strings of all the pstr
 * @stack: stack given by main
 * @line_cnt: line counter for error messages
 * Return: null
 */
void pstr(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
stack_t *current = *stack;
while (current)
{
if (current->n <= 0 || current->n > 127)
break;
putchar((char) current->n);
current = current->next;
}
putchar('\n');
}
