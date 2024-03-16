/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:47:45 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 13:31:58 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (s[len] == c)
		return ((char *)s + len);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char a[] = "hello, world";

	printf("%s", ft_strrchr(a, 'h'));
	return (0);
}
*/
