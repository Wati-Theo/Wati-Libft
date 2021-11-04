/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <Wati-Theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:19:43 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 02:28:41 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*retturn;

	retturn = dst;
	if (dst == NULL || src == NULL)
		return (0);
	if (dst < src)
	{
		while (len)
		{
			*((char *)dst) = *((char *)src);
			dst++;
			src++;
			len--;
		}
		return (retturn);
	}
	ft_memcpy(dst, src, len);
	return (retturn);
}

int main(void)
{
	char str[] = "based";
	char *ptr = (str + 1);
	char str1[] = "based";
	char *ptr1 = (str + 1);

	printf("REAL: %s\n", memmove(str, ptr, 4));
	printf("%s\n", ft_memmove(str1, ptr1, 4));
	return (0);
}
