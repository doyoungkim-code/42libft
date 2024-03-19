/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:24:09 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/19 16:34:39 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)s + i);
		i ++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char abc[] = "hello";
	printf("%s\n", strchr(abc, '\0'));
	printf("%s\n", ft_strchr(abc, '\0'));
	return (0);
}
*/
