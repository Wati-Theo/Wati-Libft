/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:09:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 17:13:12 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char * src, size_t dstsize)
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

int	main(void)
{
	char	dst[] = "bonjour";
	char	src[] = "jourbon";
	
	printf("%d\n %s\n", strlcpy(dst, src, 7), dst);

	char	dst1[] = "bonjour";
	char	src1[] = "jourbon";
	
	printf("%d\n %s\n", ft_strlcpy(dst1, src1, 7), dst);
}