/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:36:33 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/11 18:13:20 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_test(unsigned int a, char *b)
{
	*b = 'g';
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (*s)
		f(i ++, s ++);
}

/*
#include <stdio.h>
int	main(void)
{
	char s[7] = "abcdef";
	ft_striteri(s, ft_test);
	printf("%s", s);
	return (0);
}
*/
