/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:14:35 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/14 15:54:19 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	
	i = 0;
	while (lst != NULL)
	{
		i ++;
		lst = (*lst).next;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	node_a;
	t_list	node_b;

	head = &node_a;
	node_a.content = "aaa";
	node_a.next = &node_b;
	node_b.content = "bbb";
	node_b.next = NULL;

	printf("%d", ft_lstsize(head));
	return (0);
}
*/
