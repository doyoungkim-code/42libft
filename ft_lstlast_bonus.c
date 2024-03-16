/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:00:22 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/16 19:33:32 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	lst_a;
	t_list	lst_b;
	t_list	lst_c;
	t_list	*lst_d;

	head = &lst_a;
	lst_a.content = "babo";
	lst_a.next = &lst_b;
	lst_b.next = &lst_c;
	lst_c.next = NULL;
	lst_c.content = "abc";
	lst_d = ft_lstlast(head);
	printf("%s", (char *)lst_d -> content);
	printf("%s", (char *)head -> content);
	return (0);
}
*/
