/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:44:09 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/18 16:29:32 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check_set(char c, char const *set)
{
	int	i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

char	*check_malloc(int j, int i)
{
	char	*buff;

	if (j > i)
		buff = malloc(sizeof(char) * ((j - i) + 2));
	else if (j == i)
		buff = malloc(sizeof(char) * 2);
	else
		buff = malloc(sizeof(char) * 1);
	return (buff);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buff;
	int		i;
	int		j;
	int		y;

	i = 0;
	y = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && check_set(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1) - 1;
	while (s1[j] && check_set(s1[j], set) == 1)
		j--;
	buff = check_malloc(j, i);
	if (!buff)
		return (NULL);
	while (i <= j)
	{
		buff[y] = s1[i];
		i++;
		y++;
	}
	buff[y] = '\0';
	return (buff);
}
