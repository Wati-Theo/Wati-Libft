/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:09:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/05 19:00:29 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	sizeofdst;

	i = 0;
	sizeofdst = ft_strlen(dst);
	if (dstsize == 0 || dstsize < sizeofdst || src[0] == 0)
		return (ft_strlen(src) + sizeofdst);
	while (src[i] && i < dstsize)
	{
		dst[sizeofdst + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + sizeofdst);
}
