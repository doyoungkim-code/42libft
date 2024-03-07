/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:28:32 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:24:04 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	total_len;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	total_len = ft_strlen(s1) + ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (total_len + 1));
	if (s3 == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		s3[i] = s1[i];
		i ++;
	}
	while (i < total_len)
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
    char as[] = "abcdefgh";
	char ass[] = "ddddd";
    printf("%s", ft_strjoin(as, ass));
    return (0);
}
*/
