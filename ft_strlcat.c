/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:09:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/17 15:22:49 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

#include "stdio.h"
#include "string.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= dst_len)
		return (dstsize + ft_strlen(src));
	while (i < (dstsize - dst_len - 1) && i < dstsize && i < src_len)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (ft_strlen(src) + dst_len);
}
