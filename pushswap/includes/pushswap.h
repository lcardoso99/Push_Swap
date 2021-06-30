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
void	stack_del(t_stack **stack);
void	swapper(int *a, int *b);
int	swap(t_stack **head);
int	push(t_stack **hdst, t_stack **hsrc);
int rotate(t_stack **head);
int rev_rotate(t_stack **head);
int	ss(t_stack **s1, t_stack **s2);
int rr(t_stack **s1, t_stack **s2);
int rrr(t_stack **s1, t_stack **s2);
int	stacksize(t_stack *stack);
void    short_sort(t_stack **stack, int len);

#endif 
