/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:37:54 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/19 15:21:11 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*pa;
	size_t		n;

	n = size * nmemb;
	if (nmemb != 0 && (n / nmemb) != size)
		return (NULL);
	pa = malloc(n);
	if (pa == NULL)
		return (NULL);
	ft_bzero(pa, n);
	return (pa);
}
/*
#include <stdio.h>
int	main (void)
{
    size_t num;
    int *arr, *arr2, *arr3;

    num = 123;
    arr = (int *)malloc(sizeof(int)*num);
	arr2 = (int *)calloc(0, sizeof(int));
    arr3 = (int *)ft_calloc(0, sizeof(int));

    for (int i = 0; i < num + 3; i++)
    {
        printf("malloc 결과: %10d\n", *(arr + i));
    }
    printf("\n");
 
    for (int i = 0; i < num + 3; i++)
    {
        printf("calloc 결과:%10d\n", *(arr2 + i));
    }
    printf("\n");

	for (int i = 0; i < num + 3; i++)
	{
		printf("ft_calloc 결과: %10d\n", *(arr3 + i));
	}
    free(arr);
    free(arr2);
	return (0);
}
*/
