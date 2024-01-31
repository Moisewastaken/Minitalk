/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:33:52 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/10 21:33:54 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*a;
	unsigned char	*b;

	if (!n)
		return (0);
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (--n != 0 && a[i] == b[i])
		i++;
	return (a[i] - b[i]);
}
