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

char			**ft_split(const char *s, char c);
static ssize_t	get_index(const char *s, char c);
static char		*row_alloc(char **mx, int i);
static char		**alloc(const char *s, char c, char **mx);
static char		**split(const char *s, char c, char **mx, char *c_s);

char	**ft_split(const char *s, char c)
{
	int		i;
	char	**mx;
	char	*c_s;

	i = count(s, c);
	mx = alloc(mx, i);
	if (mx == NULL)
		return (NULL);
	return (split(s, c, mx, (char *)s));
}

static ssize_t	get_index(const char *s, char c)
{
	ssize_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

static char	**alloc(const char *s, char c, char **mx)
{
	int		i;
	char	*c_s;

	i = 0;
	c_s = (char *)s;
	while (ft_strchr(c_s, c))
	{
		c_s = ft_strchr(c_s, c);
		i++;
		c_s++;
	}
	mx = (char **)malloc((i + 2) * sizeof(char *));
	if (mx == NULL)
		return (NULL);
	mx[i + 1] = NULL;
}

static char	**split(const char *s, char c, char	**mx, char *c_s)
{
	ssize_t	idx;
	char	*f;
	int		i;

	i = 0;
	while (i <= sizeof(mx) / sizeof(char *) + 1)
	{
		mx[i] = row_alloc(mx, i);
		if (m[i] == NULL)
			return (NULL);
		idx = get_index(c_s, c);
		if (idx == -1)
			ft_strlcpy(mx[i], c_s, ft_strlen(c_s) + 1);
		else
		{
			f = ft_substr(c_s, 0, idx);
			ft_strlcpy(mx[i], f, idx + 1);
			free(f);
		}
		c_s = ft_strchr(c_s, c);
		c_s++;
		i++;
	}
	return (mx);
}

static char	*row_alloc(char **mx, int i)
{
	char	*p;

	p = (char *)malloc(ft_strlen(c_s) + 1);
	if (p == NULL)
	{
		while (i--)
			free(mx[i]);
		return (NULL);
	}
	return (p);
}
