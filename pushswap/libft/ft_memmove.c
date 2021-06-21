/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:23:43 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/07 17:27:13 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!str1 && !str2)
		return (NULL);
	d = (unsigned char *)str1;
	s = (unsigned char *)str2;
	i = 0;
	while (i++ < n)
		if (str2 + i == str1)
		{
			i = n;
			while (i-- > 0)
				d[i] = s[i];
			return (str1);
		}
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (str1);
}
