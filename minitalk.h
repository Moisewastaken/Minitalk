/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:19:32 by mcochin           #+#    #+#             */
/*   Updated: 2022/08/08 16:31:34 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include "libft/libft.h"

int		ft_atob(int c);
int		ft_btoi(int bitd[]);
int		ft_btoa(int bits[]);
void	send_char(char c, int pid);
void	send_int(int len, int pid);
void	send_confirm(int signal);
void	get_binary(int signal);
char	*get_str(char c, char *str, int *i, int *cpid);

#endif
