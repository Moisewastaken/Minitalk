/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:57:31 by mcochin           #+#    #+#             */
/*   Updated: 2022/03/31 16:41:58 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	y;

	i = -1;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[++i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *) &big[i]);
			y = i;
			while (big[++y] == little[++j] && y < len)
				if (little[j + 1] == '\0')
					return ((char *) &big[i]);
		}
	}
	return (NULL);
}
