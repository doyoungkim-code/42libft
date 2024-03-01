/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:14:26 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/01 18:09:09 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len ++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = 0;
	dup = (char *)malloc(sizeof(char) * (s_len + 1));
	while (s[i] != '\0')
	{
		dup[i] = s[i];
		i ++;
	}
	dup[i] = '\0';
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>
int main(void)
{
   char *string = "this is a copy";
   char *newstr;
   if ((newstr = ft_strdup(string)) != NULL)
      printf("The new string is: %s\n", newstr);
   return 0;
}
*/
