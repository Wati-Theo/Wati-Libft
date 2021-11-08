/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:27:23 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/06 15:12:35 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s) + 1;
	if (!s)
		return (NULL);
	while (size + 1)
	{
		if (s[size] == c)
			return ((char *)s + size);
		size--;
	}
	return (NULL);
}