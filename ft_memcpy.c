/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:04:37 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 11:39:38 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*n_dest;
	const unsigned char	*n_src;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	n_dest = dest;
	n_src = src;
	i = 0;
	while (i < n)
	{
		*n_dest = *n_src;
		n_dest ++;
		n_src ++;
		i ++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int src[] = {1, 2, 3};
	int dest[3];

	ft_memcpy(dest, src, sizeof(int) * 3);

	for (int i = 0; i < 3; ++i)
	{
		printf("%d", src[i]);
	}
	for (int i = 0; i < 3; ++i)
	{
		printf("%d", dest[i]);
	}
	return (0);
}
*/
