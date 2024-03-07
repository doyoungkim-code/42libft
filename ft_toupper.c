/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:19:56 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:11:10 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c = c & ~(1 << 5);
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	char c[5] = "heLLo";
	int	i = 0;

	while (c[i] != '\0')
	{
		printf("%c", ft_toupper(c[i]));
		i ++;
	}
	return (0);
}
*/
