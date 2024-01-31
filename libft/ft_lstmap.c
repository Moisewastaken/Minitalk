/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcochin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:40:45 by mcochin           #+#    #+#             */
/*   Updated: 2022/04/15 18:46:24 by mcochin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_buff;
	t_list	*current;
	t_list	*new_element;

	current = lst;
	lst_buff = NULL;
	while (current)
	{
		new_element = ft_lstnew((*f)((void *)current->content));
		if (!new_element)
			ft_lstclear(&lst_buff, del);
		ft_lstadd_back(&lst_buff, new_element);
		current = current->next;
	}
	return (lst_buff);
}
