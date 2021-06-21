/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:32:24 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 15:39:00 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	c = (const char)c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (c == str[i])
		{
			return ((char *)str + i);
		}
		i--;
	}
	if (c == '\0' && str[i] == '\0')
		return ((char *)str + i);
	return (NULL);
}
