/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wati-Theo <Wati-Theo@protonmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 10:27:59 by Wati-Theo        ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*retturn;

	retturn = dst;
	if (dst == NULL || src == NULL)
		return (0);
	while (n)
	{
		*((char *)dst) = *((char *)src);
		dst++;
		src++;
		n--;
	}
	return (retturn);
}

int main(void)
{
	char str[] = "based";
	char *ptr = (str + 1);
	char str1[] = "based";
	char *ptr1 = (str + 1);

	printf("REAL: %s\n", memcpy(str, ptr, 4));
	printf("%s\n", ft_memcpy(str1, ptr1, 4));
	return (0);
}
