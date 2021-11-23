/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:51:00 by wati-theo         #+#    #+#             */
/*   Updated: 2021/11/23 18:44:03 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*firstnew;
	t_list	*element;

	if (!lst)
		return (NULL);
	firstnew = ft_lstnew(f(lst->content));
	if (!firstnew)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&firstnew, del);
			return (NULL);
		}	
		ft_lstadd_back(&element, element);
		lst = lst->next;
	}
	return (firstnew);
}
