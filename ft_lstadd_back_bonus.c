/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:24:03 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/14 17:16:35 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	cur = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		(*lst) = new;
		return ;
	}
	while (cur -> next != NULL)
		cur = cur -> next;
	cur -> next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	babo1;
	t_list	babo2;
	t_list	babo_new;

	head = &babo1;
	babo1.content = "kkk";
	babo1.next = &babo2;
	babo2.next = NULL;
	babo_new.content = "abc";
	babo_new.next = NULL;
	ft_lstadd_back(&head, &babo_new);
	printf("%s", (char *)head -> content);
	printf("%s", (char *)babo2.next -> content);
	return (0);
}
*/
