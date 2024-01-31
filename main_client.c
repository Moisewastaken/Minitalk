/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_client.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:18:55 by mcochin           #+#    #+#             */
/*   Updated: 2022/08/08 16:31:49 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	if (argc != 3)
		exit(1);
	pid = ft_atoi(argv[1]);
	i = -1;
	send_int(getpid(), pid);
	sleep(0);
	send_int(ft_strlen(argv[2]), pid);
	while (argv[2][++i])
		send_char(argv[2][i], pid);
	send_char('\0', pid);
	while (1)
		signal(SIGUSR1, send_confirm);
}

void	send_confirm(int signal)
{
	(void)signal;
	ft_printf("Message received !\n");
	exit(0);
}

void	send_char(char c, int pid)
{
	int	i;
	int	bit;

	i = 8;
	while (--i >= 0)
	{
		bit = (unsigned int)(c >> i) & 1;
		if (bit == 1)
			kill(pid, SIGUSR1);
		else if (bit == 0)
			kill(pid, SIGUSR2);
		else
			return ;
		usleep(50);
	}
}

void	send_int(int len, int pid)
{
	int	i;
	int	bit;

	i = 32;
	while (--i >= 0)
	{
		bit = (unsigned int)(len >> i) & 1;
		if (bit == 1)
			kill(pid, SIGUSR1);
		else if (bit == 0)
			kill(pid, SIGUSR2);
		else
			return ;
		usleep(50);
	}
}
