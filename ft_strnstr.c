/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 19:45:27 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/18 16:25:34 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

char	*ft_ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] != needle[0] && haystack[i] && i < len)
		i++;
	while (haystack[i] && haystack[j] & i < len)
	{
		while (haystack[i] == needle[j] && i < len && haystack[i])
		{
			i++;
			j++;
		}
	}
}




















int	main(void)
{
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("%s\n", ft_strnstr("lorem ipsipsum dolor sit amet", "ipsumm", 30));
}












char	*ft_ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] != needle[0] && i < len && haystack[i])
		i++;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (((char *)haystack) + (i - j));
			if (needle[j] != haystack[i])
				i--;
		}
		i++;
	}
	return (NULL);
}
