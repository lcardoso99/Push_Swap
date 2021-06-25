int	ss(t_stack **s1, t_stack **s2)
{
	swap(s1);
	swap(s2);
	return (0);
}

int rr(t_stack **s1, t_stack **s2)
{
	rotate(s1);
	rotate(s2);
	return (0);
}

int rrr(t_stack **s1, t_stack **s2)
{
	rev_rotate(s1);
	rev_rotate(s2);
	return (0);
}
