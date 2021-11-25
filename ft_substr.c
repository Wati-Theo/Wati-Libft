/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:54 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/25 15:27:09 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*the_nouvelle;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;
	if (start > s_len)
		return (ft_calloc(1, sizeof(char)));
	if ((s_len - start) > len)
		the_nouvelle = ft_calloc((len + 1), sizeof(char));
	else
	{
		the_nouvelle = ft_calloc((s_len - start + 1), sizeof(char));
		len = s_len - start + 1;
	}
	if (!the_nouvelle)
		return (NULL);
	while (s[start + i] && i < len)
	{
		the_nouvelle[i] = s[start + i];
		i++;
	}
	return (the_nouvelle);
}
