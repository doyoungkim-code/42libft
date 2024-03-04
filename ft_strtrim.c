/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:57:22 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/04 15:42:52 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	a;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	i = 0;
	a = 0;
	while (ft_strchr(set, s1[i]) != 0 && s1[i] != '\0')
		i ++;
	while (ft_strchr(set, s1[s1_len - 1]) != 0)
		s1_len --;
	if (i >= s1_len)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (s1_len - i));
	if (str == NULL)
		return (NULL);
	while (i < s1_len)
	{
		str[a] = s1[i];
		a ++;
		i ++;
	}
	str[a] = '\0';
	return (str);
}

/*
#include<stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim("abccc2222aac", "abc"));
}
*/
