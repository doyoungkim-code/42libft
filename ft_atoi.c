/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:59:41 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 18:44:48 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	i;
	int	n;

	i = 0;
	n = 0;
	sign = 1;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i ++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '+')
			sign = 1;
		else if (nptr[i] == '-')
			sign = -1;
		i ++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n = 10 * n + (nptr[i] - 48);
		i ++;
	}
	return (sign * n);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char stra[] = "   -3423%123";
    char strb[] = "-!3423%123";
	char strc[] = "   +3423%123";
	char strd[] = "   000342a3%123";
    char stre[] = "   ~~3423%123";
    char strf[] = "   3423%123";
    char strg[] = "34212-3";
    char strh[] = "   -++34123";

	printf("%d\n", ft_atoi(stra));
	printf("%d\n", ft_atoi(strb));
	printf("%d\n", ft_atoi(strc));
	printf("%d\n", ft_atoi(strd));
	printf("%d\n", ft_atoi(stre));
	printf("%d\n", ft_atoi(strf));
	printf("%d\n", ft_atoi(strg));
	printf("%d\n", ft_atoi(strh));

	return (0);
}
*/
