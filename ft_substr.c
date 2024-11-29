/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:40:45 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:40:57 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*m;
	char	*c;

	if ((start + len) > ft_strlen(s))
		return (NULL);
	c = (char *)s + start;
	m = (char *)malloc(len + 1);
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, c, len + 1);
	return (m);
}
