/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:51:00 by wati-theo         #+#    #+#             */
/*   Updated: 2021/11/24 12:12:08 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*element;

	if (!lst)
		return (NULL);
	element = ft_lstnew(f(lst->content));
	if (!element)
	{
		ft_lstclear(&element, del);
		return (NULL);
	}
	lst = lst->next;
	begin = element;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&begin, element);
	}
	return (begin);
}
