/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 18:12:47 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/22 18:36:12 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lastlist;

	if (!new)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	lastlist = ft_lstlast(*alst);
	lastlist->next = new;
}
