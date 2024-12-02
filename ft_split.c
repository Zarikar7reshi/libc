/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabruma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:40:27 by sabruma           #+#    #+#             */
/*   Updated: 2024/11/29 22:40:29 by sabruma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char			**ft_split(const char *s, char c);
static ssize_t	get_index(const char *s, char c);
static int		count(char *c_s, char c);
static char		*split(char *c_s, char c);

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**mx;
	char	*c_s;

	i = count((char *)s, c);
	mx = (char **)malloc((i + 1) * sizeof(char *));
	if (mx == NULL)
		return (NULL);
	i = 0;
	c_s = (char *)s;
	while (i < count((char *)s, c))
	{
		mx[i] = split(c_s, c);
		if (!mx[i])
			while (i--)
				free(mx[i]);
		if (ft_strchr(c_s, c))
			c_s = ft_strchr(c_s, c);
		i++;
	}
	return (mx);
}

static char	*split(char *c_s, char c)
{
	ssize_t	idx;
	char	*p;

	idx = get_index(c_s, c);
	if (idx == -1)
	{
		p = (char *)malloc(ft_strlen(c_s) + 1);
		if (!p)
			return (NULL);
		ft_strlcpy(p, c_s, ft_strlen(c_s) + 1);
	}
	else
		p = ft_substr(c_s, 0, idx);
	return (p);
}

static int	count(char *c_s, char c)
{
	int	i;

	i = 1;
	while (ft_strchr(c_s, c))
	{
		c_s = ft_strchr(c_s, c);
		i++;
		c_s++;
	}
	return (i);
}

static ssize_t	get_index(const char *s, char c)
{
	ssize_t	i;

	i = 0;
	while ((size_t)i <= ft_strlen(s))
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
