/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 21:47:31 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/21 21:47:37 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char		*ft_strnstr(char *str, char *to_find, size_t len);
static char	*find_str(char *str, char *to_find, int i, int j, size_t len);

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!to_find[i])
		return (str);
	return (find_str(str, to_find, i, j, len));
}

static char	*find_str(char *str, char *to_find, int i, int j, size_t len)
{
	int	found;

	found = 0;
	while (i < ft_strlen(str) && i < len && !found)
	{
		j = 0;
		while (to_find[j])
		{
			if (!(str[i + j] == to_find[j]))
			{
				found = 0;
				break ;
			}
			found = 1;
			j++;
		}
		i++;
	}
	if (found)
	{
		str += i - 1;
		return (str);
	}
	else
		return (NULL);
}
