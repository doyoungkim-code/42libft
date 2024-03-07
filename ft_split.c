/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:44:51 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:29:43 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			result ++;
		i ++;
	}
	return (result);
}

static char	*ft_strtok(char *s, char c, int *len, int *del_len)
{
	char	*tok;

	*len = 0;
	*del_len = 0;
	tok = s;
	while (*tok == c)
	{
		(*del_len)++;
		tok ++;
	}
	while (*tok != c && *tok != '\0')
	{
		tok ++;
		(*len)++;
	}
	*tok = '\0';
	return (s);
}

static char	**ft_strtok_front(char *s, char c, int wordc)
{
	int		len;
	int		del;
	char	*str;
	char	**result;
	int		i;

	i = 1;
	result = (char **)malloc(sizeof(char *) * (wordc + 1));
	str = ft_strtok(s, c, &len, &del);
	result[0] = (char *)malloc(sizeof(char) * (len + 1));
	result[0] = str + del;
	while (i < wordc)
	{
		str = ft_strtok(str + len + del + 1, c, &len, &del);
		result[i] = (char *)malloc(sizeof(char) * (len + 1));
		result[i] = str + del;
		i ++;
	}
	result[i] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wordc;

	wordc = ft_wordcount(s, c);
	result = ft_strtok_front((char *)s, c, wordc);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{	
	char	s[] = "hello    world of    world";
		
	char	**result = ft_split(s, ' ');
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i ++;
	}
	return (0);
}
*/
