/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:46:34 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/25 15:10:36 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	stotal_len;
	char	*the_nouvelle;
	int		i;
	int		j;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	stotal_len = ft_strlen(s1) + ft_strlen(s2);
	the_nouvelle = ft_calloc(stotal_len + 1, sizeof(char));
	if (!the_nouvelle)
		return (NULL);
	while (s1[i])
		the_nouvelle[j++] = s1[i++];
	i = 0;
	while (s2[i])
		the_nouvelle[j++] = s2[i++];
	the_nouvelle[j] = '\0';
	return (the_nouvelle);
}
