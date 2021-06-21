/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:27:55 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/06 14:30:30 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*target;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	target = malloc(sizeof(char) * i + 1);
	if (target == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}
