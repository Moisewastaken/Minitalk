/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:27:53 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 16:19:37 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buff;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	buff = malloc (ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!buff)
		return (NULL);
	i = 0;
	y = 0;
	while (s1[i])
	{
		buff[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		buff[i] = s2[y];
		i++;
		y++;
	}
	buff[i] = '\0';
	return (buff);
}
