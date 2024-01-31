/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 10:31:33 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 16:23:10 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buff;

	i = -1;
	if (!s)
		return (NULL);
	buff = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!buff)
		return (NULL);
	while (s[++i])
		buff[i] = (*f)(i, s[i]);
	buff[i] = '\0';
	return (buff);
}
