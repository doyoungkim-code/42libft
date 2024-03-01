/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:20:44 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 14:58:35 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len ++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	while (i + dst_len + 1 < size && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i ++;
	}
	dst[dst_len + i] = '\0';
	if (dst_len <= size)
		return (src_len + dst_len);
	if (dst_len > size)
		return (src_len + size);
}

/*
#include <stdio.h>
int	main(void)
{
	char	dst[] = "12345";
	char	src[] = "abcdefghijklmnop";
	printf("%d\n", ft_strlcat(dst, src, 7));
	printf("%s\n", dst);
	return (0);
}
*/
