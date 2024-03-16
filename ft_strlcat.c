/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:20:44 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 22:09:23 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (size == 0 && dst == NULL)
		return (ft_strlen(src));
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	i = 0;
	if (dst_len >= size)
		return (src_len + size);
	while (i + dst_len + 1 < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	return (src_len + dst_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	dst[20];
//	char	src[] = "abcdefghijklmnop";
//	printf("%d\n", ft_strlcat(dst, src, 7));
//	printf("%s\n", dst);
	ft_memset(dst, 'r', 15);
	printf("%d\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 5));
	printf("%s\n", dst);
	return (0);
}
*/
