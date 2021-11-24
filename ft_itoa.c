/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:02:12 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/24 17:32:01 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

static	void	ft_revtab(char *str)
{
	char	tmp;
	int		i;
	int		offset;
	int		len;

	len = ft_strlen(str);
	tmp = 0;
	i = 0;
	offset = 0;
	if (str[0] == '-')
		offset = 1;
	while (i < len / 2)
	{
		tmp = str[i + offset];
		str[i + offset] = str[len - i - 1];
		str[len - i - 1] = tmp;
		i++;
	}
}

static	int	ft_tabsize(int n)
{
	int	tabsize;

	tabsize = 0;
	while (n)
	{
		n /= 10;
		tabsize++;
	}
	return (tabsize);
}

static	void	ft_puttab(char c, char *str, int len, int n)
{
	int	i;

	i = 0;
	if (n < 0)
		str[i++] = '-';
	while (str[i] != 0 && i <= len)
		i++;
	if (i <= len)
		str[i] = c;
}

static void	ft_putnbr(int n, int len, char *str)
{
	int	firstneg;

	firstneg = n;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		ft_puttab((n % 10) + '0', str, len, firstneg);
		n /= 10;
	}
	ft_puttab((n % 10) + '0', str, len, firstneg);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		neg;

	neg = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		neg++;
	len = ft_tabsize(n);
	str = ft_calloc(len + neg, sizeof(char));
	if (!str)
		return (NULL);
	ft_putnbr(n, len + neg, str);
	ft_revtab(str);
	return (str);
}
