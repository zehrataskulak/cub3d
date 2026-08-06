/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztaskula <ztaskula@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 21:14:35 by zzehra            #+#    #+#             */
/*   Updated: 2025/06/28 14:37:10 by ztaskula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(int n)
{
	int	digit;

	digit = 1;
	if (n < 0)
		digit++;
	while (n > 9 || n < -9)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

static void	ft_putdigit(char *num, int n, int digit, int isngtv)
{
	while (digit > 0)
	{
		num[digit - 1] = n % 10 + '0';
		n /= 10;
		digit--;
	}
	if (isngtv == 1)
		num[0] = '-';
}

char	*ft_itoa(int n)
{
	int		digit;
	int		isngtv;
	char	*num;

	if (n == -2147483648)
	{
		num = ft_strdup("-2147483648");
		return (num);
	}
	isngtv = 0;
	num = malloc (ft_digit(n) + 1);
	if (num == NULL)
		return (NULL);
	digit = ft_digit(n);
	num[digit] = '\0';
	if (n < 0)
	{
		n *= -1;
		isngtv = 1;
	}
	ft_putdigit(num, n, digit, isngtv);
	return (num);
}
