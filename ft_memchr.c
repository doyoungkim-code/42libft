/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:23:33 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:15:16 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*chrs;
	size_t				i;

	chrs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (chrs[i] == c)
			return (chrs + i);
		i ++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "adfsaggag";
	printf("%s",(char *)ft_memchr(str, 'f', 5));
	return(0);
}
*/
