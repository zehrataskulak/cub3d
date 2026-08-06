/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:15:13 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:37:35 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		a;
	t_list	*mv;

	if (!lst)
		return (NULL);
	mv = lst;
	a = ft_lstsize(lst);
	while (a > 1)
	{
		mv = mv -> next;
		a--;
	}
	return (mv);
}
