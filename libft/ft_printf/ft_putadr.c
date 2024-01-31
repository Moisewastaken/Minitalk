/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:19:13 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/26 17:01:01 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_puthexa(unsigned long int nb)
{
	char	*base_lib;
	int		i;

	i = 0;
	base_lib = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_puthexa(nb / 16);
		nb %= 16;
	}
	if (nb < 16)
		i += ft_putchar(base_lib[nb]);
	return (i);
}

int	ft_putadr(unsigned long int adr)
{
	int	i;

	i = 0;
	if (!adr)
		return (i += ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_puthexa(adr);
	return (i);
}
