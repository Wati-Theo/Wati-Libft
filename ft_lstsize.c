/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:21:30 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/22 17:01:13 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*actulst;
	int		lstsize;

	actulst = lst;
	lstsize = 0;
	while (actulst)
	{
		lstsize++;
		actulst = actulst->next;
	}
	return (lstsize);
}
