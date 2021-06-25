#include "includes/pushswap.h"

void	stack_del(t_stack **stack)
{
	t_stack	*del;
	t_stack	*tmp;

	tmp = *stack;
	while (tmp)
	{
		del = tmp;
		tmp = tmp->next;
		free(del);
	}
	*stack = NULL;
}

t_stack *create_new_node(void)
{
	t_stack *first;

	first = (t_stack *)malloc(sizeof(t_stack));
	first->num = 0;
	first->diff = 1;
	first->next = NULL;
	return (first);
}

t_stack *args_to_stack(int ac, char **av)
{
	int	i;
	t_stack	*first;
	t_stack *tmp;

	i = 1;
	first = create_new_node();
	tmp = first;
	while(i < ac)
	{		
		tmp->num = ft_atoi(av[i]);
		if (i < ac - 1)
		{
			tmp->next = create_new_node();
			tmp = tmp->next;
			tmp->diff = 1;
		}
		i++;
	}
	//doubles_checker(&first);
	return(first);
}
