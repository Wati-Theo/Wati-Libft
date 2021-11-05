/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:23:05 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 17:41:42 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{
	unsigned int res;
  char a[100] = "hshshs";
	char b[] = "abcdefgh";
	char c[] = "hshshs";
	char d[] = "abcdefgh";
	int size = 15;

    printf("Output: %i\nExpected output: %i\n", ft_strlcpy(a, b, size), strlcpy(c,d, size));
    printf("char copied: %s\nExpected char copied: %s\n",a,c);
	return (0);
}
