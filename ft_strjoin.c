/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:28:32 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/11 17:14:44 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i ++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		s3[i] = s2[k];
		i ++;
		k ++;
	}
	s3[i] = '\0';
	return (s3);
}

/*
#include <stdio.h>
int main(void)
{
    char as[] = "aaaa";
	char ass[] = "ddddd";
    printf("%s", ft_strjoin(NULL, ass));
    return (0);
}
*/
