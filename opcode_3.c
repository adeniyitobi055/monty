#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the head pointer of stack
 * @nline: the line number
 * Return: Nothing
 */
void rotl(stack_t **stack, unsigned int nline)
{
	stack_t *temp;
	int hold, hold_again;
	(void)nline;

	if (stack == NULL || *stack == NULL)
	{
		nop(stack, nline);
	}

	hold = (*stack)->n;
	temp = *stack;

	while (temp)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}

	hold_again = temp->n;
	(*stack)->n = hold_again;
	temp->n = hold;
}

/**
 * qpush - pushes for queue instead of stack
 * @stack: pointer to the head pointer of stack
 * @nline: the line number
 * Return: Nothing
 */
void qpush(stack_t **stack, unsigned int nline)
{
	stack_t *new, *last;

	if (stack == NULL)
	{
		fprintf(stderr, "L%d: stack not found\n", nline);
		exit(EXIT_FAILURE);
	}

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stack(stack);
		exit(EXIT_FAILURE);
	}

	last = NULL;
	if (*stack)
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*stack = new;
	new->prev = last;
	new->next = NULL;
	new->n = arg.arg;
}
