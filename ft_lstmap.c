/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wati-theo <wati-theo@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:51:00 by wati-theo         #+#    #+#             */
/*   Updated: 2021/11/23 14:48:41 by wati-theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(f)(void *), void (*del)(void *))
{
	if (!lst)
		return (NULL);
	t_list	*new;
	t_list	*firstnew;
	
	new = malloc(sizeof(*new) * ft_lstsize(lst));
	if (!new)
		return (NULL);
	firstnew = new;
	while (lst)
	{
		new = f(lst);
		lst = lst->next;
		new = new->next; 
	}
	return (firstnew);
}
