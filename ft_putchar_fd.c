/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:41:28 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/12 14:02:38 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*
#include <stdio.h>
#include <fcntl.h>
int	main(void)
{
	int	fd;

	fd = open("myfile.txt", O_RDWR | O_CREAT, 0644);
	if(fd == -1)
		printf("오류");
	if(fd >= 0)
		printf("정상");
	printf("%d", fd);
	ft_putchar_fd('a',fd);
	return (0);
}
*/
