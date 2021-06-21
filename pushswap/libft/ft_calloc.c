/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:12:51 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/06 14:53:39 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	int	*space;

	space = (int *)malloc(size * number);
	if (!space)
		return (NULL);
	ft_memset(space, 0, size * number);
	return (space);
}
