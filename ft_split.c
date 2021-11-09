/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:15:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/09 15:17:53 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = ft_calloc(5, sizeof(char *));
	while (i < 5)
	{
		str[i] = ft_calloc(5, sizeof(char));
		if (str[i] == NULL)
			return (NULL);
		i++;
	}
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 4)
		{
			str[i][j] = 'e';
			j++;
		}
		str[i][j] = '\0';
		i++;
	}
	return (str);
}

int	main(void)
{
	char	**str = ft_split("mon logIn est Tschlege mais bientot Wati-Theo", ' ');
	printf("%s\n", str);
}
