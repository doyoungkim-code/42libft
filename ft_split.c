/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:44:51 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/18 12:15:12 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i ++;
	}
	free(s);
	return (NULL);
}

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
	result = (char **)ft_calloc(sizeof(char *), (wordc + 1));
	if (result == NULL)
		return (NULL);
	str = ft_strtok(s, c, &len, &del);
	result[0] = (char *)ft_calloc(sizeof(char), (len + 1));
	if (result[0] == NULL)
		return (ft_free(result));
	ft_strlcpy(result[0], str + del, len + 1);
	while (i < wordc)
	{
		str = ft_strtok(str + len + del + 1, c, &len, &del);
		result[i] = (char *)ft_calloc(sizeof(char), (len + 1));
		if (result[i] == NULL)
			return (ft_free(result));
		ft_strlcpy(result[i++], str + del, len + 1);
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*str;
	int		wordc;

	if (s == NULL)
		return (NULL);
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	wordc = ft_wordcount(str, c);
	if (wordc == 0)
		result = (char **)ft_calloc(sizeof(char *), 1);
	else
		result = ft_strtok_front(str, c, wordc);
	if (result == NULL)
		return (NULL);
	free(str);
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{	
	char	*string = "      split       this for   me  !       ";
	char	**result = ft_split(string, ' ');
	int i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i ++;
	}
	ft_free(result);
	return (0);
}
*/
