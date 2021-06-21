/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:26:58 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 17:44:55 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbstr(char const *str, char c)
{
	int	counter;
	int sep;

	counter = 0;
	sep = 1;
	while (*str)
	{
		if (*str == c)
			sep = 1;
		else if (*str != c && sep)
		{
			sep = 0;
			counter++;
		}
		str++;
	}
	return (counter);
}

char	*ft_copynext(char const *str, int *ptr, char c)
{
	int		i;
	char	*sub;

	i = 0;
	while (str[*ptr] && str[*ptr] != c)
		*ptr += 1;
	if (!(sub = malloc(sizeof(char) * (*ptr + 1))))
		return (0);
	while (i < *ptr)
	{
		sub[i] = *str;
		i++;
		str++;
	}
	sub[i] = '\0';
	return (sub);
}

char    **ft_split(char const *str, char c)
{
    char    **array;
    int     size;
    int     i;
    int     ptr;

    ptr = 0;
    i = 0;
    size = ft_nbstr(str, c) + 1;
    array = malloc(sizeof(char *) * size);
    if (!array)
        return (NULL);
    while (i < size - 1)
    {
        if (*str == c)
            str++;
        else
        {
            array[i] = ft_copynext(str, &ptr, c);
            str += ptr;
            ptr = 0;
            i++;
        }
    }
    array[i] = 0;
    return (array);
}
