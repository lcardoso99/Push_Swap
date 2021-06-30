#include "includes/pushswap.h"

int	stacksize(t_stack *stack)
{
	int counter;

	counter = 0;
	if (stack)
	{
		while (stack->next)
		{
			counter++;
			stack = stack->next;
		}
		counter++;
	}
	return (counter);
}
