/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:49:20 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/17 15:35:26 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		res;

	i = 0;
	res = 0;
	if (!n)
		return (0);
	while (((char *)s1)[i] == ((char *)s2)[i] && i < (n - 1))
		i++;
	if (((char *)s1)[i] != ((char *)s2)[i])
		res = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
	return (res);
}
