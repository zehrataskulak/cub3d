/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:17:03 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:38:59 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				len;
	unsigned char	uc;

	uc = (unsigned char)c;
	len = (int)ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == uc)
			return ((char *)str + len);
		len--;
	}
	return (NULL);
}
