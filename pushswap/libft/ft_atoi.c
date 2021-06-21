/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:08:11 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/06 14:52:41 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	i;
	int	sign;

	i = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	sign = 1;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	c = 0;
	while ((int)str[i] > 47 && (int)str[i] < 58)
	{
		c *= 10;
		c = c + ((int)str[i] - 48);
		i++;
	}
	c *= sign;
	return (c);
}
