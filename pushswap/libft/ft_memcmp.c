/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:22:45 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/03 14:44:56 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	long unsigned int	i;
	unsigned char		*first;
	unsigned char		*second;

	i = 0;
	first = (unsigned char *)b1;
	second = (unsigned char *)b2;
	while (i < len)
	{
		if (first[i] == second[i])
			i++;
		else
			return (first[i] - second[i]);
	}
	return (0);
}
