/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:28:22 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/15 14:31:50 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		res;

	res = 0;
	i = 0;
	while ((s1[i] == s2[i]) && i < (n - 1) && s1[i] && s2[i])
		i++;
	if (s1[i] != s2[i])
		res = ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (res);
}
