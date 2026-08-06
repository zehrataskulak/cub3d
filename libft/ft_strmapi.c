/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:16:50 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:38:51 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*arr;

	i = 0;
	if (!s)
		return (NULL);
	arr = ft_strdup (s);
	if (arr == NULL)
		return (NULL);
	while (s[i])
	{
		arr[i] = f(i, arr[i]);
		i++;
	}
	return (arr);
}
