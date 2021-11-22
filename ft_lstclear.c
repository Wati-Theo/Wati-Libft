/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wati-theo <wati-theo@student.42lyon.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:02:17 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/23 00:03:21 by wati-theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_del;

	next_del = 0;
	while (next_del)
	{
		next_del = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_del;
	}
	lst = NULL;
}
