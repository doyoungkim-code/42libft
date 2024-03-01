/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 17:23:28 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 14:59:11 by doyoukim         ###   ########.fr       */
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

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i ++;
	}
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main(void)
{
    char	s1[4] = "hel";
    char	s2[6] = "world";
    ft_strlcpy(s1, s2, 3);
    printf("%s\n", s1);
}
*/
