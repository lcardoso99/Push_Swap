#include "includes/pushswap.h"

void	short_sort(t_stack **stack, int len)
{
	if (len == 2 && *stack->num > *stack->next->num)
		ft_printf("sa\n");
	else if (len == 3)
	{
		if ((*stack)->num < (*stack)->next->num && (*stack)->next->num >
		(*stack)->next->next->num &&
		(*stack)->num < (*stack)->next->next->num)
			ft_printf("sa\nra\n");
		if ((*stack)->num > (*stack)->next->num && 
			(*stack)->next->num < (*stack)->next->next->num) //213
			ft_printf("sa\n");

		if ((*stack)->num > (*stack)->next->num &&
			(*stack)->next->num > (*stack)->next->next->num) //321
			ft_printf("sa\nrra\n");
		if ((*stack)->num < (*stack)->next->num &&
			(*stack)->next->num > (*stack)->next->next->num) //231
			ft_printf("rra\n");
		if ((*stack)->num > (*stack)->next->num &&
			(*stack)->next->num > (*stack)->next->next->num)
			ft_printf("ra\n");
	}
}
