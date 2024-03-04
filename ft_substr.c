/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:59:50 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/04 10:25:22 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i ++;
		start ++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char as[] = "abcdefgh";

	printf("%s", ft_substr(as, 3, 4));
	return (0);
}
*/
