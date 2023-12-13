#include "monty.h"
/**
* rotr - chanes the stack
* @stack: stack head
* @line_count: line count
* Return: none
*/
void rotr(stack_t **stack, unsigned int line_count)
{
stack_t *bottom;
stack_t *prev;
(void) line_count;
if (!stack || !*stack || !(*stack)->next)
return;
bottom = *stack;
while (bottom->next)
bottom = bottom->next;
prev = bottom->prev;
bottom->next = *stack;
bottom->prev = NULL;
prev->next = NULL;
(*stack)->prev = bottom;
*stack = bottom;
}
