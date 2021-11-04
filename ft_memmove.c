/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <Wati-Theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:19:43 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 10:49:00 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*retturn;
	size_t	i;

	retturn = dst;
	i = 0;
	if (dst == NULL || src == NULL)
		return (0);
	if (dst < src)
	{
		while (i < len)
		{
			*((char *)dst) = *((char *)src);
			dst++;
			src++;
			i++;
		}
		return (retturn);
	}
	//ft_memcpy(dst, src, len);
	return (retturn);
}

int main(void)
{
	char str[] = "based";
	char *ptr = (str + 1);
	char *ptr01 = (str + 3);
	char str1[] = "based";
	char *ptr1 = (str1 + 1);
	char *ptr02 = (str1 + 3);

	printf("REAL: %s\n", memmove(str, ptr, 5));
	printf("%s\n", ft_memmove(str1, ptr1, 5));
	return (0);
}
