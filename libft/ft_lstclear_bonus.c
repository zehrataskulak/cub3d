/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:14:56 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:37:20 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*mv;

	if (!lst || !del)
		return ;
	mv = *lst;
	while (*lst)
	{
		mv = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = mv;
	}
	*lst = NULL;
}
