/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:46:49 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/21 21:47:02 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t size);

size_t	ft_strlcat(char *to, const char *from, size_t size)
{
	size_t	len;

	len = ft_strlen(to);
	if (size > len)
	{
		to += len;
		ft_memmove(to, from, size - len);
	}
	return ((size_t)ft_strlen(from) + len);
}
