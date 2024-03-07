/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:52:45 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:17:23 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t				i;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i ++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char adsf[] = "hello";
	char adsf2[] = "ke";

	printf("%d", ft_memcmp(adsf, adsf2, 1));
	return (0);
}
*/
