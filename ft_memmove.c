/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:19:43 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/05 18:51:20 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*retturn;

	retturn = dst;
	if (dst == NULL || src == NULL)
		return (0);
	if (dst > src)
	{
		len--;
		while (len + 1)
		{
			*((char *)dst + len) = *((char *)src + len);
			len--;
		}
		return (retturn);
	}
	ft_memcpy(dst, src, len);
	return (retturn);
}

