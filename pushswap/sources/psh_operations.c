#include "../includes/ft_pushswap.h"

void swap(t_stack *d)
{
	t_stack	*stack;

	stack 0 *head;
	if(stack && stack->next)
		ft_swap(&stack->nb, &stack->next->nb);
}

void	push(t_stack **head_to, t_stack **head_from)
{
	t_stack	*tmp;
	t_stack	*to;
	t_stack	*from;

	to = *head_to;
	from = *head_from;
	if (!from)
		return (0);
	tmp = from;
	from = from->next;
	*head_from = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*head_to = to;
	}
	else
	{
		tmp->next = to;
		*head_to = tmp;
	}
}
