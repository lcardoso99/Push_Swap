#include "includes/pushswap.h"

int main(int ac, char **av)
{
	t_stack *sta;
	//t_stack *stb;
	int len;

	if(!(sta = args_to_stack(ac, av)))
	{
		write(2, "Error\n", 6); //not necessary, but the return(0) is;
		return (0);
	}
	len = stack_size(sta);
	/*stb = NULL;
	result = new_result();*/
	if (len < 4)
	{
		short_sort(&sta, len);
		stack_del(&sta);
		return(0);
	}
	/*else
		stack_sorter(&sta,&stb,&result,len);
	*/
	while (sta->next)
	{
		ft_putnbr_fd(sta->num, 1);
		sta = sta->next;
	}
	ft_putnbr_fd(sta->num, 1);
	stack_del(&sta);
	//free(result);
	return(0);
}
