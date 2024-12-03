/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:43:24 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:43:25 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		neg;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		neg = 1;
	}
	if (n / 10 > 0 && neg)
		ft_putnbr_fd(-n / 10, fd);
	else if (n / 10 > 0)
		ft_putnbr_fd(n / 10, fd);
	c = n / 10 + '0';
	ft_putchar_fd(c, fd);
}
