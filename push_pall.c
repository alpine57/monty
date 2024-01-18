#include "main.h"
/**
*
*
*/
void push(stack_t **stack, int value)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = value;
    new_node->next = *stack;
    *stack = new_node;
}

/**
 * pall - Function to print all elements on the stack
 * @stack: structure holding the stack
 * @line_number: opcode number
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (!current)
		printf("%d\n", line_number);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
