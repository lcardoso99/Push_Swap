#include "includes/pushswap.h"
#include "stdio.h"
//change printf to ft_printf

void	short_sort(t_stack **stack, int len)
{
	if (len == 2 && (*stack)->num > (*stack)->next->num)
		printf("sa\n");
	else if (len == 3)
	{
		if ((*stack)->num < (*stack)->next->num && (*stack)->next->num >
		(*stack)->next->next->num &&
		(*stack)->num < (*stack)->next->next->num)
			printf("sa\nra\n");
		if ((*stack)->num > (*stack)->next->num && 
			(*stack)->num < (*stack)->next->next->num) //213
			printf("sa\n");
		else if ((*stack)->num > (*stack)->next->num &&
			(*stack)->next->num > (*stack)->next->next->num) //321
			printf("sa\nrra\n");
		else if ((*stack)->num < (*stack)->next->num &&
			(*stack)->next->num > (*stack)->next->next->num) //231
			printf("rra\n");
		else if ((*stack)->num > (*stack)->next->num &&
			(*stack)->next->num < (*stack)->next->next->num) //312
			printf("ra\n");
	}
}
