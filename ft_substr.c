/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:54 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/07 18:44:37 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t 	s_len;
	char	*TheNouvelle;
	size_t	i;
	
	s_len = ft_strlen(s);
	i = 0;
	if (start > s_len)
		return (ft_calloc(1, sizeof(char)));
	TheNouvelle = ft_calloc((s_len - start) + 1, sizeof(char));
	if (!TheNouvelle)
		return (NULL);
	while (s[start + i] && i < len)
	{
		TheNouvelle[i] = s[start + i];
		i++;
	}
	TheNouvelle[i] = '\0';
	return (TheNouvelle);
}
