/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:59:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/03 19:47:09 by tschlege         ###   ########lyon.fr   */
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
}

int main(void)
{
	char str[] = "based";
	char ptr = str + 1;
	printf("%s", )
}