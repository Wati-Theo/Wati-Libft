/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:19:43 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/04 13:39:34 by tschlege         ###   ########lyon.fr   */
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
	if (dst > src)
	{
		len--;
		while (len + 1)
		{
			*((char *)dst + len) = *((char *)src + len);
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
	char *ptr1 = (str1 + 1);

	printf("REAL: %s\n", memmove(str, ptr, 2));
	printf("%s\n", ft_memmove(str1, ptr1, 2));
	return (0);
}
