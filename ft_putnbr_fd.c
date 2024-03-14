/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:09:01 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/12 16:55:05 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	nb;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	if (n < 10)
	{
		nb = n % 10 + '0';
		write(fd, &nb, 1);
	}
}
/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	n;
	int fd;

	n = 3;
	fd = open("test.txt", O_RDWR | O_CREAT, 0644);
	ft_putnbr_fd(n, fd);
	return (0);
}
*/
