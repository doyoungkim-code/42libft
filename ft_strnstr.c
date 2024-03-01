/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:50:10 by doyoukim          #+#    #+#             */
/*   Updated: 2024/02/28 17:57:23 by doyoukim         ###   ########.fr       */
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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}

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
