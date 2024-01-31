/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:01:57 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/26 16:49:12 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_puthexnbr(unsigned int nb, int base)
{
	char	*base_lib;
	int		i;

	i = 0;
	base_lib = "0123456789abcdef0123456789ABCDEF";
	if (nb >= 16)
	{
		i += ft_puthexnbr(nb / 16, base);
		nb %= 16;
	}
	if (nb < 16)
		i += ft_putchar(base_lib[nb + base]);
	return (i);
}
