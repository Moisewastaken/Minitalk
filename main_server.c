/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_server.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:11:08 by mcochin           #+#    #+#             */
/*   Updated: 2022/08/08 16:25:37 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	int		spid;

	spid = getpid();
	ft_printf("%d\n", spid);
	while (1)
	{
		signal(SIGUSR1, get_binary);
		signal(SIGUSR2, get_binary);
	}
	return (0);
}

char	*get_str(char c, char *str, int *i, int *cpid)
{
	str[*i] = c;
	if (c == '\0')
	{
		ft_printf("%s", str);
		usleep(100);
		kill(*cpid, SIGUSR1);
		free(str);
		*i = 0;
		*cpid = 0;
		str = NULL;
	}
	else
		*i += 1;
	return (str);
}

void	get_binary(int signal)
{
	static int	index;
	static int	bits[32];
	static char	*str;
	static int	i;
	static int	cpid;

	if (signal == SIGUSR1)
		bits[index] = 1;
	if (signal == SIGUSR2)
		bits[index] = 0;
	index++;
	if ((cpid == 0 || !str) && index == 32)
	{
		index = 0;
		if (cpid != 0)
			str = calloc(sizeof(char), ft_btoi(bits) + 1);
		else
			cpid = ft_btoi(bits);
	}
	if (str && index == 8)
	{
		index = 0;
		str = get_str(ft_btoa(bits), str, &i, &cpid);
	}
}
