/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:50:10 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:18:53 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[0] && little_len <= len - i)
		{
			if (ft_strncmp(&big[i], little, little_len) == 0)
				return ((char *)&big[i]);
		}
		i ++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char big[] = "go go yogurt";
	char little[] = "gu";
	printf("return(gurt) : %s\n", ft_strnstr(big,little,0));
	printf("return(null) : %s\n", ft_strnstr(big,little,9));
	return (0);
}
*/
