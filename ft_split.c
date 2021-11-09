/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:15:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/09 18:26:44 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	int		i;
	char	**str;

	wc = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == (unsigned char)c && s[i])
			i++;
		while (s[i] != (unsigned char)c && s[i])
			i++;
		wc++;
	}
	printf("%d\n", wc);
}

int	main(void)
{
	char	**str = ft_split("  mon logIn est Tschlege mais bientot   ", ' ');
	//printf("%s\n", str);
}
