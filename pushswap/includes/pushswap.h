#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

typedef struct s_stack
{
	int	num;
	int	diff;
	struct s_stack *next;
}				t_stack;

/*
typedef struct s_result
{
	int rotator;
	char *final;
}				t_result;*/

t_stack *args_to_stack(int ac, char **av);
t_stack *create_new_node(void);
void    stack_del(t_stack **stack);

#endif 
