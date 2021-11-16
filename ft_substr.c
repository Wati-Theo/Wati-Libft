/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:20:54 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/16 11:20:56 by tschlege         ###   ########lyon.fr   */
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
	the_nouvelle = ft_calloc((s_len - start) + 1, sizeof(char));
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

/*int	main(void)
{
	char	*str = "i just want this part #############";
	
	//printf("expected output: %s\n\n", substr(str, 5, 10));
	printf("output: %s\n\n", ft_substr(str, 5, 10));
}*/
