/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:09:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/05 16:04:18 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcat(char *dst, const char * src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0 || dstsize < ft_strlen(dst))
		return (ft_strlen(src));
	while (src[i] && i < dstsize)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dstsize);
}

int main(void)
{
	char a[]="absc";
	char b[]="";
	char c[]="absc";
	char d[]="";
	unsigned int n = 9;
	printf("Expected output: %i\n",strlcat(a,b,n));
	printf("%s\n",a);
	printf("Output: %i\n",ft_strlcat(c,d,n));
	printf("%s\n",c);
	return (0);
}
