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

char	*ft_strtrim(const char *s1, const char *set);

char	*ft_strtrim(const char *s1, const char *set)
{
	const char	*m;
	char		*t;

	t = s1;
	while (s1)
	{
		m = set;
		while (ft_strchr(s1, *m))
			t = ft_strchr(s1, *m);
		while (ft_strrchr(s1, *m))
			t = ft_strrchr(s1, *m);
		m++;
		s1++;
	}
	return (t);
}
