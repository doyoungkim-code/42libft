/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:47:42 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/07 18:11:40 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c = c | (1 << 5);
	return (c);
}

/*
#include <stdio.h>

int main(void)
{
    char c[5] = "heLLo";
    int i = 0;

    while (c[i] != '\0')
    {
        printf("%c", ft_tolower(c[i]));
        i ++;
    }
    return (0);
}
*/
