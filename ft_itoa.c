/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:30:16 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 19:30:48 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_negative(int *n, char **str)
{
	if ((*n) < 0 && *n != -2147483648)
	{
		(*str)[0] = '-';
		(*n) = (*n) * (-1);
	}
	if ((*n) == -2147483648)
	{
		(*str)[0] = '-';
		(*str)[1] = '2';
		(*n) = 147483648;
	}
}

static int	ft_digit(int n, int *minus)
{
	int	d;

	d = 1;
	if (n == -2147483648)
	{
		*minus = 2;
		d = 9;
		return (d);
	}
	if (n < 0)
	{
		n = n * (-1);
		*minus = 1;
	}
	else
		*minus = 0;
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

	i = 1;
	digit = ft_digit(n, &minus);
	str = (char *)malloc(sizeof(char) * (digit + minus + 1));
	if (str == NULL)
		return (NULL);
	ft_negative(&n, &str);
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
	n = -2147483648;
	printf("%s", ft_itoa(n));
	return (0);
}
*/
