/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:32:01 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 15:25:48 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return ((char*)str);
	}
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < size)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
