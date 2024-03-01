/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:24:09 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 14:47:07 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char abc[] = "hello";

	printf("%s", ft_strchr(abc, 'l'));
	return (0);
}
*/
