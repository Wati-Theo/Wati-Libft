/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:45:27 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/07 13:49:32 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] != needle[0] && i < len)
		i++;
	while (needle[j] == haystack[i] && i < len)
	{
		i++;
		j++;
	}
	if (j == ft_strlen(needle))
		return (((char *)haystack) + (i - j));
	return (NULL);
}