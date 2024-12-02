/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:41:14 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:41:16 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	compare(const char *set, char c);
char		*ft_strtrim(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		len;
	char	*s2;

	s2 = (char *)s1 + ft_strlen(s1);
	i = 0;
	len = ft_strlen(s1);
	j = ft_strlen(s1);
	while (i < len && j > i)
	{
		if (compare(set, *s1++))
			i++;
		if (compare(set, *s2--))
			j--;
	}
	return (ft_substr(s1, i, j));
}

static int	compare(const char *set, char c)
{
	while (set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}
