/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:08:48 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 16:24:08 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		buff = ft_calloc(sizeof(char), 1);
		return (buff);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s) - start;
	buff = ft_calloc(sizeof(char), len + 1);
	if (!buff)
		return (NULL);
	while (y < len && s[i + start])
	{
		buff[y] = s[i + start];
		i++;
		y++;
	}
	return (buff);
}
