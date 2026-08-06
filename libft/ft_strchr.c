/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:15 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:38:17 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int				i;
	int				len;
	unsigned char	uc;

	uc = (unsigned char)c;
	len = (int)ft_strlen(str);
	i = 0;
	while (i < len + 1)
	{
		if (str[i] == uc)
			return ((char *)str + (int)i);
		i++;
	}
	return (NULL);
}
