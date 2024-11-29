#include "libft.h"
#include <stdio.h>
char			**ft_split(const char *s, char c);
static ssize_t	get_index(const char *s, char c);

char	**ft_split(const char *s, char c)
{
	int		i;
	ssize_t	idx;
	char	**mx;
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
	c_s = (char *)s;
	
	i = 0;
	while (i <= sizeof(mx) / sizeof(char *) + 1)
	{
		mx[i] = (char *)malloc(ft_strlen(s) + 1);
		if (mx[i] == NULL)
			return (NULL);
		idx = get_index(c_s, c);
		if (idx == -1)
			ft_strlcpy(mx[i], c_s, ft_strlen(c_s) + 1);
		else
		{
			ft_strlcpy(mx[i], ft_substr(c_s, 0, idx), idx + 1);
		}
		printf("m[%d]: %s\n", i, mx[i]);
		c_s = ft_strchr(c_s, c);
		c_s++;
		i++;
	}
	return (mx);
}

static ssize_t get_index(const char *s, char c)
{
	ssize_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (- 1);
}
