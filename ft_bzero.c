/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:56:21 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/19 14:57:14 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bz;
	size_t			i;

	bz = s;
	i = 0;
	while (i < n)
	{
		bz[i] = 0;
		i ++;
	}
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int as[] = {1, 2, 3, 4, 5, 6, 7};
	bzero(NULL, sizeof(int) * 5);
	int i = 0;
	while (i < 7)
	{
		printf("%d", as[i]);
		i ++;
	}

	return (0);
}
*/
