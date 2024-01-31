/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:32:34 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/26 16:47:23 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_check_type(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'd')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	if (c == '%')
		count += ft_putchar('%');
	if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	if (c == 'i')
		count += ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count += ft_putunsnbr(va_arg(args, unsigned int));
	if (c == 'x')
		count += ft_puthexnbr(va_arg(args, int), 0);
	if (c == 'X')
		count += ft_puthexnbr(va_arg(args, int), 16);
	if (c == 'p')
		count += ft_putadr(va_arg(args, unsigned long int));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = -1;
	va_start(args, str);
	count = 0;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			count += ft_check_type(str[i + 1], args);
			i++;
		}
		else
			count += ft_putchar(str[i]);
	}
	va_end(args);
	return (count);
}
