#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * opcode - runs all the functions
 * @stack: stack given by main
 * @str: string to compare
 * @line_cnt: ammount of lines
 * Return: non existance
 */
void opcode(stack_t **stack, char *str, unsigned int line_cnt)
{
int i = 0;
instruction_t op[] = INSTRUCTIONS;
if (!strcmp(str, "stack"))
{
global.data_struct = 1;
return;
}
if (!strcmp(str, "queue"))
{
global.data_struct = 0;
return;
}
while (op[i].opcode)
{
if (strcmp(op[i].opcode, str) == 0)
{
op[i].f(stack, line_cnt);
return; /* if we found a match, run the function */
}
i++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, str);
status = EXIT_FAILURE;
}
