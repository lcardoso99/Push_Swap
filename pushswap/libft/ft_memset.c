/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:24:08 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/03 12:19:23 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	long unsigned int	i;
	char				*new;

	new = (char *)str;
	i = 0;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	return (str);
}
