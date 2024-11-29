#include "libft.h"
#include <stdio.h>

char	*ft_substr(const char *s, unsigned int start, size_t len);

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*m;
	char	*c;

	if ((start + len) > ft_strlen(s))
		return NULL;
	c = (char *)s + start;
	m = (char *)malloc(len + 1);
	if (m == NULL)
		return (NULL);
	ft_strlcpy(m, c, len + 1);
	return (m);
}
