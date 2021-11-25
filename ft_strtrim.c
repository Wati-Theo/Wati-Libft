/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:23:37 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/25 15:12:00 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static	int	is_set(char const *set, char c)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == (unsigned char)c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;
	int		i;

	if (!s1)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_set(set, s1[start]))
		start++;
	if (start == end + 1)
		return (ft_calloc(1, sizeof(char)));
	while (end && is_set(set, s1[end]))
		end--;
	end++;
	str = ft_calloc((end - start) + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[start] && start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
