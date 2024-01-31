/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 15:02:54 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/02 16:31:27 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	void	*cpy;

	len = ft_strlen(s) + 1;
	cpy = malloc(len);
	if (cpy == NULL)
		return (NULL);
	return ((char *) ft_memcpy(cpy, s, len));
}
