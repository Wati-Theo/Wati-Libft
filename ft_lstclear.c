/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:02:17 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/24 11:47:11 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_del;

	next_del = *lst;
	while (next_del)
	{
		next_del = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next_del;
	}
	lst = NULL;
}
