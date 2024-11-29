#include "libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*m;

	m = (char *)malloc(ft_strlen(s));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		m[i] = f(i, s[i]);
		i++;
	}
	return (m);
}
