/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:49:14 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/13 17:54:38 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	if (*lst != NULL)
		new -> next = (*lst);
	*lst = new;
}

/*
#include <stdio.h>
int main(void)
{
    t_list node;
	t_list babo;
	t_list *head = &node;
	
	node.content = "abc";
	node.next = NULL;
	babo.content = "edf";
	babo.next = NULL;
	printf("%s", (char *)head -> content);
    ft_lstadd_front(&head, &babo);
	printf("%s", (char *)head -> next -> content);
    return (0);
}
*/
