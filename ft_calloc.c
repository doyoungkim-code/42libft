/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:37:54 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/01 18:10:17 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*pa;
	int		i;

	i = 0;
	pa = (char *)malloc(size * nmemb);
	while (i < nmemb * size)
	{
		pa[i] = 0;
		i ++;
	}
	return (pa);
}

/*
#include<stdio.h>
int	main(void)
{
    int num;
    int *arr, *arr2, *arr3;

    num = 10;
    arr = (int *)malloc(sizeof(int)*num); //int [10]크기의 배열 동적할당을 합니다.
	arr2 = (int *)calloc(num, sizeof(int)); //int [10]크기의 배열 동적할당을 합니다.
    arr3 = (int *)ft_calloc(num, sizeof(int));

    for (int i = 0; i < num + 3; i++)
    {
        printf("malloc 결과: %10d\n", *(arr + i)); // 결과가 쓰레기 값으로 나온것을 알 수 있습니다.
    }
    printf("\n");
 
    for (int i = 0; i < num + 3; i++)
    {
        printf("calloc 결과:%10d\n", *(arr2 + i)); // 결과가 쓰레기 값으로 나온것을 알 수 있습니다.
    }
    printf("\n");

	for (int i = 0; i < num + 3; i++)
	{
		printf("ft_calloc 결과: %10d\n", *(arr3 + i));
	}
 
    //우리는 동적할당으로 잡은 메모리는 해제 시켜야합니다.
    free(arr);
    free(arr2);
	return (0);
}
*/
