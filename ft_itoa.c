/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:30:16 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/11 13:59:00 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	d;

	d = 1;
	if (n < 0)
		n = n * (-1);
	while (n >= 10)
	{
		n = n / 10;
		d ++;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		minus;
	int		i;
	int		digit;
	int		nb;

	minus = 0;
	i = 1;
	digit = ft_digit(n);
	str = (char *)malloc(sizeof(char) * (digit + minus + 1));
	if (n < 0)
	{
		str[0] = '-';
		n = n * (-1);
		minus = 1;
	}
	while (i <= digit)
	{
		nb = n % 10 + 48;
		n = n / 10;
		str[digit + minus - i] = nb;
		i ++;
	}
	str [digit + minus] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	int	n;
	n = -126;
	printf("%s", ft_itoa(n));
	return (0);
}
*/
