/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 22:00:00 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/21 22:00:03 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isalpha(int c);
static int	isupper(int c);
static int	islower(int c);

int	ft_isalpha(int c)
{
	return (isupper(c) || islower(c));
}

static int	isupper(int c)
{
	if (c >= 0x41 && c <= 0x5A)
		return (c);
	return (0);
}

static int	islower(int c)
{
	if (c >= 0x61 && c <= 0x7A)
		return (c);
	return (0);
}
