/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:16:50 by lcardoso          #+#    #+#             */
/*   Updated: 2021/03/09 17:19:55 by lcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char		*str;
	long int	nb;

	nb = (long int)n;
	if (!(str = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	if (nb == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (nb < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-nb));
		if (!str)
			return (NULL);
	}
	else if (nb >= 10)
		str = ft_strjoin(ft_itoa(nb / 10), ft_itoa(nb % 10));
	else if (nb < 10 && nb >= 0)
	{
		str[0] = nb + '0';
		str[1] = '\0';
	}
	return (str);
}
