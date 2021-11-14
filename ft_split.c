/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:15:28 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/14 19:34:21 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

char	**ft_freebox(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

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

/*static char	*ft_get_next_word(char **s, char c)
{
	
}*/

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**str;
	int		start;
	size_t	word_len;
	size_t	i;

	if (!s)
		return (NULL);
	wc = ft_word_count(s, c);
	str = ft_calloc(wc, sizeof(char *));
	start = 0;
	i = 0;
	word_len = 0;
	if (!str)
		return (NULL);
	while (i < wc)
	{
		word_len = ft_word_len(s, c, &start);
		str[i] = ft_substr(s, start - word_len, word_len);
		if (!str[i])
			return (ft_freebox(str));
		i++;
	}  
	// printf("word count: %zu\n", wc);
	// printf("word len: %zu\n", word_len);
	str[i] = 0;
	return (str);
}

// int	main(void)
// {
	// char	**str = ft_split(NULL, ' ');
	/*printf("%s\n", str[0]);
	printf("%s\n", str[1]);
	printf("%s\n", str[2]);
	printf("%s\n", str[3]);
	printf("%s\n", str[4]);
	printf("%s\n", str[5]);
	printf("%s\n", str[6]);*/
// }