/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tschlege <tschlege@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 12:02:12 by tschlege          #+#    #+#             */
/*   Updated: 2021/11/12 15:39:22 by tschlege         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "stdio.h"

static	char	*ft_perfecto(char *str, int n, int len, int neg)
{
	char	*strr;
	int		i;

	i = 0;
	strr = ft_calloc(len + neg, sizeof(char));
	if (!strr)
		return (NULL);
	if (n < 0)
		strr[i] = '-';
	while (len)
	{
		strr[i] = str[len];
		i++;
		len--;
	}
	strr[i] = 0;
	return (strr);
}

static	int	ft_tabsize(int n)
{
	int	tabsize;

	tabsize = 0;
	if (n < 0)
		tabsize++;
	while (n)
	{
		n /= 10;
		tabsize++;
	}
	return (tabsize);
}

static	void	ft_putchar(char c, char *str, int len, int n)
{
	int	i;

	i = 0;
	while (str[i] != 0 && i <= len)
		i++;
	if (i <= len)
		str[i] = c;
}

static void	ft_putnbr(int n, int len, char *str)
{
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		ft_putchar((n % 10) + '0', str, len, n);
		n /= 10;
	}
	ft_putchar((n % 10) + '0', str, len, n);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		neg;

	neg = 1;
	if (n < 0)
		neg++;
	len = ft_tabsize(n);
	str = ft_calloc(len + neg, sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ("-2147483648");
	ft_putnbr(n, len, str);
	str[len + 1] = 0;
	return (ft_perfecto(str, n, len, neg));
}

int	main(void)
{
	//printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-42));
	printf("%s\n", ft_itoa(42));
	//printf("%d\n", ft_tabsize(-42));
	//printf("%d\n", ft_tabsize(42));
}
