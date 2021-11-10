/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:15:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/10 16:46:02 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static	size_t	ft_word_count(char const *s, char c)
{
	int		i;
	size_t	wc;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] == (unsigned char)c)
			i++;
		while (s[i] != (unsigned char)c && s[i])
			i++;
		if (!s[i] && s[i - 1] != (unsigned char)c)
			wc++;
		wc++;
	}
	return (wc);
}

static	int	ft_word_len(char const *s, char c, int *start)
{
	size_t	word_len;

	word_len = 0;
	while (s[*start] == (unsigned char)c)
		*start = *start + 1;
	while (s[*start] != (unsigned char)c && s[*start])
	{
		*start = *start + 1;
		word_len++;
	}
	if (s[*start] == (unsigned char)c || !s[*start])
		return (word_len);
	return (0);
}

static void	ft_filltab(char)
{
	    
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**str;
	int		start;
	size_t	word_len;
	int		i;

	wc = ft_word_count(s, c);
	str = ft_calloc(wc, sizeof(char *));
	start = 0;
	i = 0;
	word_len = 0;
	if (!str)
		return (NULL);
	while (i < wc)
	{
		str[i] = ft_calloc((ft_word_len(s, c, &start) + 1), sizeof(char));
		if (!str[i])
			return (NULL);
		
		i++;
	}
	printf("word count: %zu\n", wc);
	//printf("word len: %zu\n", word_len);
	return (NULL);
}

int	main(void)
{
	char	**str = ft_split("  mon logIn est Tschlege mais bientot   Wati-Theo ", ' ');
	//printf("%s\n", str);
}
