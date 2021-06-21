int main(int ac, char **av)
{
	t_stack *sta;
	t_stack *stb;
	int len;

	if(!(sta = args_to_stack(ac, av)))
	{
		write(2, "Error\n", 6); //not necessary, but the return(0) is;
		return (0);
	}
	len = s_len(sta);
	stb = NULL;
	//result = new_result();
	if (len < 4)
	{
		short_sort(&sta, len);
		stack_del(&sta);
		return(0);
	}
	else
		stack_sorter(&sta,&stb,&result,len);
	print_result(result->final);
	stack_del(&sta);
	free(result);
	return(0);
}
