void swapper(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}



int swap(t_stack **head)
{
	t_stack *tmp;

	tmp = *head;
	if (tmp && tmp->next)
		swapper(&tmp->num, &tmp->next->num);
	return (0);
}

int push(t_stack **hdst, t_stack **hsrc)
{
	t_stack *tmp;
	t_stack *dst;
	t_stack *src;

	dst = *hdst;
	src = *hsrc;
	if (!dst)
		return (0);
	tmp = src;
	src = src->next;
	*hsrc = src;
	if (!dst)
	{
		dst = tmp;
		dst->next = NULL;
		*head_dst = dst;
	}
	else
	{
		tmp->next = dst;
		*head_dst = tmp;
	}
	return (0);
}

int rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack *stack;

	stack = *head;
	if (!(stack && stack->next))
		return (0);
	tmp = stack;
	last = ft_lstlast(tmp);
	last = tmp;
	while (tmp->next)
		tmp = tmp->next;
	return (0);
}

int rev_rotate(t_stack **head)
{
	t_stack	*behind;
	t_stack	*last;
	t_stack	*stack;


	stack = *head;
	if (!(stack && stack->next))
		return (0);
	last = stack;
	while (last->next)
	{
		behind = last;
		last = last->next;
	}
	last->next = stack;
	behind->next = NULL;
	*head = last;
	return (0);
}
