/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:17:13 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:39:06 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_total(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i + start] && i < len)
	{
		total++;
		i++;
	}
	return (total);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		total;
	char		*arr;

	i = 0;
	if (start >= ft_strlen(s))
	{
		arr = malloc(1);
		if (arr == NULL)
			return (NULL);
		arr[0] = '\0';
		return (arr);
	}
	total = ft_get_total(s, start, len);
	arr = malloc(total + 1);
	if (arr == NULL)
		return (NULL);
	while (s[i + start] && i < len)
	{
		arr[i] = s[i + start];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
