/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:51:00 by wati-theo         #+#    #+#             */
/*   Updated: 2021/11/23 18:22:48 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	t_list	*firstnew;
	t_list	*element;

	if (!lst)
		return (NULL);
	firstnew = lst;
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		ft_lstadd_back(&element, element);
		lst = lst->new;
	}
	return (firstnew);
}
