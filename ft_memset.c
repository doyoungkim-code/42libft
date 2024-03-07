/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:21:40 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:05:37 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		*p = c;
		p ++;
		i ++;
	}
	return (s);
}

/*
#include <stdio.h>

int	main(void)
{
	char k[5] = "abcde";

	ft_memset(k, 'k', 3);
	printf("%s", k);
	return (0);
}
*/
