/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:27:19 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 15:34:35 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	c = (const char)c;
	while (str[i] != '\0')
	{
		if (c == str[i])
		{
			return ((char *)str + i);
		}
		i++;
	}
	if (c == '\0' && str[i] == '\0')
		return ((char *)str + i);
	return (NULL);
}
