#include <unistd.h>

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
	char c;

	c = **head->id;
	tmp = *head;
	if (tmp && tmp->next)
		swapper(&tmp->num, &tmp->next->num);
	write(1,"s",1);
	write(1,"&c\n",2);
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
	c = **hsrc->id;
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
	write(1,"p",1);
	write(1,"&c\n",2);
	return (0);
}

int rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*last;
	t_stack *stack;

	stack = *head;
	c = **head->id;
	if (!(stack && stack->next))
		return (0);
	tmp = stack;
	last = ft_lstlast(tmp);
	last = tmp;
	while (tmp->next)
		tmp = tmp->next;
	write(1,"r",1);
	write(1,"&c\n",2);
	return (0);
}

int rev_rotate(t_stack **head)
{
	t_stack	*behind;
	t_stack	*last;
	t_stack	*stack;


	stack = *head;
	c = **head->id;
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
	write(1,"rr",2);
	write(1,"&c\n",2);
	return (0);
}
