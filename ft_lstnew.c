/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:32:49 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/19 17:19:22 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = ft_calloc(1, sizeof(t_list *));
	if (!new_list)
		return (NULL);
	new_list->content = content;
	new_list->next = NULL;
	return (new_list);
}
