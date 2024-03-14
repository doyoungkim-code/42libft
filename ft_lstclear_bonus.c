/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doyoukim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:55:43 by doyoukim          #+#    #+#             */
/*   Updated: 2024/03/14 18:23:04 by doyoukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;

	if (lst == NULL || del == NULL)
		return ;
	while ((*lst) != NULL)
	{
		del(*lst -> content);
		cur = (*lst)-> next;
		free(*lst);
		(*lst) = cur;
	}
}
