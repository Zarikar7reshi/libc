/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:56:35 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:56:36 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static int	get_len(int n);

char	*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		len;

	sign = 1;
	len = get_len(n);
	s = (char *)malloc(len + 1);
	if (!s)
		return (NULL);
	if (n == INT_MIN)
		return ("-2147483648");
	if (n < 0)
		sign = -1;
	if (sign == -1)
		n = -n;
	s[len--] = '\0';
	if (n == 0)
		s[len--] = '0';
	while (n)
	{
		s[len--] = n % 10 + '0';
		n /= 10;
	}
	if (sign == -1)
		s[len] = '-';
	return (s);
}

static int	get_len(int n)
{
	int	sign;
	int	len;

	len = 1;
	sign = 1;
	if (n < 0)
	{
		n = -n;
		sign = -1;
	}
	while (n > 9)
	{
		len++;
		n /= 10;
	}
	if (sign)
	{
		return (len);
	}
	return (len + 1);
}
