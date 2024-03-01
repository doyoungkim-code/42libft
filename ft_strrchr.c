/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:47:45 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 15:00:44 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != 0)
	{
		if (s[len] == c)
			return ((char *)s + len);
		len --;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "hello, world";

	printf("%s", ft_strrchr(a, 'l'));
	return (0);
}
*/
