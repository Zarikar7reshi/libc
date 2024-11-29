/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:42:00 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:42:03 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c);

char	*ft_strrchr(const char *string, int c)
{
	int	i;

	i = ft_strlen(string) - 1;
	string += i;
	while (i--)
	{
		if (*string == c)
			return ((char *)string);
		string--;
	}
	return (NULL);
}
