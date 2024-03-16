/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:57:22 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 14:44:54 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	a;
	size_t	s1_len;

	if (s1 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	i = 0;
	a = 0;
	while (ft_strchr(set, s1[i]) != 0 && s1[i] != '\0')
		i ++;
	while (ft_strchr(set, s1[s1_len - 1]) != 0 && s1_len > i)
		s1_len --;
	str = (char *)malloc(sizeof(char) * (s1_len - i + 1));
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
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strtrim(NULL, "abc"));
}
*/
