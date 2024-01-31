/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:34:58 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 16:22:33 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_intlen(int n)
{
	int	y;

	y = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		y++;
	while (n != 0)
	{
		n /= 10;
		y++;
	}
	return (y);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	tmp;
	int		nlen;

	tmp = n;
	nlen = ft_intlen(tmp);
	s = ft_calloc(sizeof(char), nlen + 1);
	if (!s)
		return (NULL);
	if (tmp == 0)
		s[0] = '0';
	if (tmp < 0)
	{
		tmp = -tmp;
		s[0] = '-';
	}
	nlen = nlen - 1;
	while (tmp != 0)
	{
		s[nlen] = tmp % 10 + '0';
		tmp /= 10;
		nlen--;
	}
	return (s);
}
