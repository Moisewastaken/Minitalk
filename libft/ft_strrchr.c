/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:35:59 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 17:12:02 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	tmp = NULL;
	while (s)
	{
		if ((unsigned char)*s == (unsigned char)c)
			tmp = (char *)s;
		if (!*s)
			return (tmp);
		s++;
	}
	return (0);
}
