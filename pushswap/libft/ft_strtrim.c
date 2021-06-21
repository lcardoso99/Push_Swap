/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:32:52 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 17:37:24 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_issep(char c, char const *set)
{
	int i;

	i = 0;
	while (c != set[i] && set[i])
		i++;
	if (c == set[i])
		return (1);
	else
		return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*s2;
	size_t	i;
	size_t	start;

	start = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1);
	while (s1[start] && ft_issep(s1[start], set))
		start++;
	while (size > start && ft_issep(s1[size - 1], set))
		size--;
	s2 = (char *)malloc(sizeof(*s1) * (size - start + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (start < size)
		s2[i++] = s1[start++];
	s2[i] = 0;
	return (s2);
}
