/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:53:03 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:53:04 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c);

int	ft_isspace(int c)
{
	if ((c >= 0x09 && c <= 0x0D) || c == 0x20)
		return (c);
	return (0);
}
