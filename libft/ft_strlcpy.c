/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:09:22 by mcochin           #+#    #+#             */
/*   Updated: 2022/03/31 19:18:29 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	j;

	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[j] && (j < size - 1))
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (ft_strlen(src));
}
