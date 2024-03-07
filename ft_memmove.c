/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 10:28:01 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:07:56 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*n_dest;
	const unsigned char		*n_src;
	size_t					i;

	n_dest = dest;
	n_src = src;
	i = 0;
	if (n_dest > n_src)
	{
		while (n)
		{
			n_dest[n - 1] = n_src[n - 1];
			n --;
		}
	}
	else
	{
		while (i < n)
		{
			n_dest[i] = n_src[i];
			i ++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {1,2,3,4,5,6,7,8,9,10};
	int *a1 = arr;
	int *a2 = arr + 1;
	ft_memmove(a2, a1, sizeof(int) * 10);
	int	i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i++]);
	}
}
*/
