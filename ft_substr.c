/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:54 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/17 16:07:12 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*the_nouvelle;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	if (start > s_len)
		return (ft_calloc(1, sizeof(char)));
	if ((s_len - start) > len)
		the_nouvelle = ft_calloc((len), sizeof(char));
	else
		the_nouvelle = ft_calloc((s_len - start), sizeof(char));
	if (!the_nouvelle)
		return (NULL);
	while (s[start + i] && i < len)
	{
		the_nouvelle[i] = s[start + i];
		i++;
	}
	the_nouvelle[i] = '\0';
	return (the_nouvelle);
}
