#include "monty.h"
/**
 * pall - printsall the stacks
 * @stack: stack given by main
 * @line_cnt: ammount of lines
 * Return: disappered
 */
void pall(stack_t **stack, unsigned int line_cnt __attribute__((unused)))
{
print_stack(*stack);
}
