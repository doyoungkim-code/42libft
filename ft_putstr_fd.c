/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:04:57 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 15:19:01 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i ++;
	}
}

/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("testfile.txt", O_RDWR | O_CREAT, 0644);
	ft_putstr_fd("abcde", fd);
	return (0);
}
*/
