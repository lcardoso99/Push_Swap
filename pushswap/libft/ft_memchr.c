/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:22:22 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 15:32:42 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *)str;
	c = (unsigned char)c;
	while (i < n)
	{
		if (tmp[i] == c)
			return ((void *)tmp + i);
		i++;
	}
	return (NULL);
}
